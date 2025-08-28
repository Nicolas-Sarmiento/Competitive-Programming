#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m, a; cin >> n;
        vector<ll> v (n);
        ll mn = 1e10;
        for( ll i = 0; i < n; i++){
            cin >> m;
            vector<ll> vi (m);
            for(auto &i : vi) cin >> i;
            sort(vi.begin(), vi.end());
            v[i] = vi[1];
            mn = min(mn, vi[0]);
        }
        ll ans = mn;
        sort(v.begin(), v.end());
        for(ll i = 1; i < n; i++){
            ans += v[i];
        }
        cout << ans << '\n';

    }
    return 0;
}