#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while( t-- ) {
        int n; cin >> n;
        vector <ll> swords (n), levels(n);
        for ( ll &i : swords ) cin >> i;
        for ( ll &i : levels ) cin >> i;
        sort( swords.rbegin(), swords.rend());
        vector <ll> level_preff (n);
        level_preff[0] = levels[0];
        for ( int i = 1; i < n; i++ ){
            level_preff[i] = levels[i] + level_preff[i-1];
        }
        ll ans = 0; 
        for ( int i = 0; i < n; i++ ) {
            if ( level_preff[i] > n ) break;
            ans = max( ans, (swords[level_preff[i] - 1]) * (i+1) ) ;
        }
        cout << ans << '\n';
    }
    return 0;
}
