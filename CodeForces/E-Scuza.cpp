#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, q; cin >> n >> q;
        vector<ll> a ( n+1, 0 );
        vector<ll> pref ( n + 1, 0 );
        vector<ll> mx ( n+1, 0);
        for ( ll i = 1; i <= n; i++ ) cin >> a[i];
        
        for ( int i = 1; i <= n; i++ ) {
            pref[i] = a[i] + pref[i-1];
            mx[i] = max( mx[i-1], a[i] );
        }
        
        
        while ( q-- ) {
            ll k; cin >> k;
            auto it = upper_bound( mx.begin(), mx.end(), k );
            ll ans_idx = (it - mx.begin()) - ( it == mx.begin() ? 0 : 1);
            cout << ( it == mx.end() ? pref.back() : pref[ans_idx] ) << ' '; 
            
        }
        cout << '\n';
    }
    return 0;
}
