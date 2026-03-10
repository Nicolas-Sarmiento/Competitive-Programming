#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while ( t-- ) {
        ll a, b; cin >> a >> b;
        ll mn = min( a, b );
        ll mx = max( a, b );
        
        ll cnt = 0;
        while ( mn < mx ) {
            mn <<= 1;
            cnt++;
        }
        
        if ( mn == mx ) {
        
            ll ans = ( cnt / 3 ) + ( (cnt % 3 ) / 2 ) + ( (cnt % 3) % 2 );
            cout << ans;
        }else cout << -1;
        
        cout << '\n';
        
    }
    return 0;
}
