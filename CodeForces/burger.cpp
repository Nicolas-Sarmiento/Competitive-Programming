#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll L;
    cin >> L;
    string s;
    while(L != 0){
        cin >> s;
        ll lr=-1, ld = -1, d = 1e9;
        for(ll i = 0; i < s.length();i++){
            if( s[i] == '.') continue;
            if( s[i] == 'R'){
                lr = i;
            }
            if( s[i] == 'D'){
                ld = i;
            }
            if( s[i] == 'Z'){
                d = 0;
            }
            if( ld != -1 && lr != -1){
                d = min(d, abs(ld-lr));
            }
        
        }
        if( ld != -1 && lr != -1){
            d = min(d, abs(ld-lr));
        }
        d = d == 1e9? 0: d;
        cout << d;
        cin >> L;
        if( L != 0){
            cout << '\n';
        }
    }
    return 0;
}