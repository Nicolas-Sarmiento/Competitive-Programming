#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    int tax = 0, aux;
    int ones = 0, twos = 0, thress = 0;
    while(t--){
        cin >> aux;
        if (aux == 4)
        {
            tax++;
            continue;
        }

        if( aux == 1){
            ones++;
        }
        if (aux == 2){
            if( twos > 0){
                ++tax;
                --twos;
            }else{
                ++twos;
            }
        }
        if ( aux == 3 ){
            ++thress;
        }
    }

    if (thress > 0 ){
        tax += thress;
        ones -= thress;
    }

    if ( twos > 0){
        ++tax;
        ones -= 2;
    }
    if ( ones > 0 ){
        tax += ones /4 + (ones % 4 != 0 ? 1 : 0);
    }
    cout << tax << '\n';
    return 0;
}