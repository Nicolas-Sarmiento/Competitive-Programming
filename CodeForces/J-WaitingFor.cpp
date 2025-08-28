#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    char e; ll i;
    ll st = 0;
    while(t--){
        cin >> e >> i;
        if( e == 'P'){
            st += i;
        }else{
            if( (i - st) >= 1){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
            st -= min(i, st);
        }
    }
    return 0;
}