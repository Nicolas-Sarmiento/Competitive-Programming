#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m, k, x; cin >> n >> m >> k;
    vector<ll> v (n); for(auto &i: v) cin >> i;
    map<ll, ll> szs;
    for(ll i = 0; i < m; i++){
        cin >> x;
        szs[x]++;
    }

    sort(v.begin(), v.end());
    ll ans = 0;
    for(auto i : v){
        auto it = szs.lower_bound(i-k);
        if ( it->first >= (i-k) && it->first <= (i+k) ){
            ans++;
            it->second--;
            if( it->second <= 0) szs.erase(it);
        }
    }
    cout << ans << '\n';
    return 0;
}