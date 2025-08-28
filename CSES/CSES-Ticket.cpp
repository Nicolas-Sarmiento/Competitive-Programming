#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m, x, ans; cin >> n >> m;
    map<ll, ll> ticks; 
    for(ll i = 0; i < n; i++){
        cin >> x;
        ticks[x]++;
    }
    vector<ll> cust (m);
    for(auto &i : cust) cin >> i;
    for( ll i = 0; i < m; i++){
        ans = -1;
        if( ticks.empty() ){
            cout << ans << '\n'; continue;
        }
        auto it = ticks.lower_bound(cust[i]);
        if ( (it == ticks.end()) || (it->first > cust[i] && it != ticks.begin()) ){
            it--;
            it->second--;
            ans = it->first;
            if( it->second <= 0) ticks.erase(it);
        }else if ( it->first == cust[i] ){
            it->second--;
            ans = it->first;
            if( it->second <= 0) ticks.erase(it);
        }

        cout << ans << '\n';
    }
    return 0;
}