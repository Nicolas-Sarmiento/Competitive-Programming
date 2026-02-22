#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp ( pair<ll,ll> a, pair <ll,ll> b ){
    if ( a.second == b.second ) return a.first > b.first;
    return a.second < b.second;
}


int main(){
    int t; cin >> t;
    while ( t-- ){
        ll n, p; cin >> n >> p;
        vector< pair<ll, ll> > v (n);
        for ( ll i = 0; i < n; i++ ) 
            cin >> v[i].first;
        
        for ( ll i = 0; i < n ; i++ ) 
            cin >> v[i].second;
            
        sort(v.begin(), v.end(), cmp );
        ll ans = p;
        ll count = n-1;

        for ( ll i = 0; i < n; i++ ) {
            if ( count == 0 ) break;
            ll q = min(count, v[i].first);
            ans += q * min(v[i].second, p);
            count -= q;
        }
        cout << ans << '\n';
    }
}
