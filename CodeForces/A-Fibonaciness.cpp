#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll a1, a2, a4, a5; cin >> a1 >> a2 >> a4 >> a5;
        
        if(a4 == (2*a2 + a1) && a5 == (3*a2 + 2*a1)){
            cout << 3 << '\n';
        }else if ( a5 == ( 2*a4 - a2) || a4 == (2*a2 + a1) || a5 == (a4 + a1 + a2) ){
            cout << 2 << '\n';
        }else {
            cout << 1 << '\n';
        }
    }
    return 0;
}