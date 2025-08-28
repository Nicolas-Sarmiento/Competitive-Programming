#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while (t--){
        ll k, n; cin >> n >> k;
        vector<ll> l(n), r(n);
        ll sm = 0;
        for(auto &i : l) cin >> i;
        for(auto &i : r) cin >> i;
        vector<ll> mn (n);
        for( ll i = 0; i < n; ++i ){
            sm += max(l[i], r[i]);
            mn[i] = min(l[i], r[i]);
        }
        sort(mn.rbegin(), mn.rend());
        for( ll i = 0; i < k-1; ++i ){
            sm += mn[i];
        }
        cout << sm + 1 << '\n';
    }
    
    return 0;
}