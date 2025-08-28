#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, s; cin >> n;
        map<ll, ll> m; 
        for(ll i = 0; i < n; i++){
            cin >> s;
            m[s]++;
        }
        ll u = m.size();
        ll d = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            d = max(d, it->second);
        }

        ll ans = min(u, d) - ( u == d? 1 : 0);
        cout << ans << '\n';
    }
    return 0;
}