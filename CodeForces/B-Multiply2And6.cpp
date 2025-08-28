#include <iostream>
using namespace std;
int main(){
    int t, s; cin >> t;
    long long n;
    while(t--){
        cin >> n;
        s = 0;
        while (n%6 == 0){
            n /= 6;
            s++;
        }
        while (n%3 == 0){
            n /= 3;
            s+=2;
        }
        if(n != 1){
            cout << -1 << '\n';
        }else{
            cout << s << '\n';
        }
    }
    return 0;
}