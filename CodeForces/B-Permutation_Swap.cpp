#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll gcd ( ll a, ll b ) {
    if ( b == 0 ) return a;
    return gcd( b, a % b );
}


int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<ll> diff (n);
        for ( int i = 0; i < n; i++ ) {
            cin >> diff[i];
            diff[i] = abs( diff[i] - (ll)(i+1) );
        }
        ll ans = diff[0];
        for ( int i = 1; i < n; i++ ) {
            ans = gcd(diff[i], ans);
        }
        cout << ans << '\n';
    }
    return 0;
}
