#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a1,a2,b1,b2; cin >> t;
    while(t--){
        cin >> a1 >> a2>>b1>>b2;
        int w = 0;
        if( a1 > b1 ){
            if (a2 >= b2) w+=2;
        }else if(a1 == b1){
            if (a2 > b2) w+=2;
        }

        if( a1 > b2 ){
            if (a2 >= b1) w+=2;
        }else if(a1 == b2){
            if (a2 > b1) w+=2;
        }
        cout << w << '\n';
    }
    return 0;
}