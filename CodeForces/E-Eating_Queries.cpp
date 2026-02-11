#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, q; cin >> n >> q;
        vector <ll> candies (n);
        for ( ll &i : candies ) cin >> i;
        sort(candies.rbegin(), candies.rend());
        vector<ll> pref (n+1, 0);
        for ( int i = 0; i < n; i++ ) {
            pref[i+1] = candies[i] + pref[i]; 
        }
        while ( q-- ) {
            ll x; cin >> x;
            auto found_it = lower_bound( pref.begin(), pref.end(), x );
            if ( found_it != pref.end() ) {
                cout << ( found_it - pref.begin() );
            } else {
                cout << -1;
            }
            cout << '\n';
        }
        
    }
    return 0;
}
