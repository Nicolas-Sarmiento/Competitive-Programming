#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        vector< vector<ll> > arr (n, vector<ll> (m));
        for(auto &v : arr) for(auto &i : v) cin >> i;
        vector< pair<ll, ll>> vp;
        ll sm, ans = 0, k = n * m;
        for( ll i = 0; i < n; i++){
            sm = 0;
            for(ll j = 0; j < m; j++) {
                sm += arr[i][j];
            }
            vp.push_back({sm, i});
        }
        sort(vp.rbegin(), vp.rend());
        for(ll i = 0; i < n; i++){
            for( ll j = 0; j < m; j++){
                ans += arr[vp[i].second][j] * (k--);
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}