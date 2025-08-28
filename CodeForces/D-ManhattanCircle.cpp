#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        vector<string> v (n);
        for(auto &i : v) cin >> i;
        ll r = 0, rm = 0;
        for( ll i = 0; i < n; i++){
            ll ch = 0;
            for(ll j = 0; j < v[i].length(); j++){
                ch += v[i][j] == '#';
            }
            if( ch > rm){
                rm = ch;
                r = i;
            }
        }
        ll c = v[r].find('#') + (rm/2);
        cout << ++r << ' ' << ++c << '\n';

    }
    return 0;
}