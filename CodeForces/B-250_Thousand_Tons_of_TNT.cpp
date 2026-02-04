#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

vector<ll> find_max_and_min( vector<ll> &preffix, ll n, ll k ) {
    ll mx = 0, mn = 1e18;
    for ( ll i = k; i <= n; i+= k ) {
        mx = max( mx, preffix[i] - preffix[i-k]);
        mn = min( mn, preffix[i] - preffix[i-k]);
    }
    return {mx, mn} ;
}

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n; cin >> n;
        vector<ll> a (n);
        for ( ll &i : a ) cin >> i;
        vector<ll> preffix (n+1, 0);
        for ( ll i = 1; i <= n; i++ ){
            preffix[i] = a[i-1] + preffix[i-1];
        }
        ll ans = 0;
        vector<ll> i_values;
        for ( ll i = 1; i * i <= n; i++ ) {
            
            if ( n % i ) continue;
            i_values = find_max_and_min(preffix, n, i);
            ans = max( ans, i_values[0] - i_values[1] );
            i_values = find_max_and_min(preffix, n, n/i );
            ans = max( ans, i_values[0] - i_values[1] );
            
        }
        cout << ans << '\n';
    }
    return 0;
}
