#include <iostream>
#include <vector>
#include <set>

#define INF 1e18

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        set <ll> nums;
        ll ai;
        for ( int i = 0; i < n; i++ ){ cin >> ai; nums.insert(ai); }
        vector <ll> dp ( n+2 , (ll)INF );
        
        for (int i = 1; i <= n; i++ ){
            if ( nums.find(i) != nums.end() ) { dp[i] = 1; continue; }
            
            
            for ( ll j = 2; j * j <= i; j++ ){
                if ( ! ( i % j ) ) {
                    dp[i] = min ( dp[i], dp[j] + dp[i/j] );
                }
            }
            
            
        }
        for ( int i = 1; i <= n; i++ ) cout << (dp[i] == (ll)INF ? -1 : dp[i]) << ' ';
        cout << '\n';
    }
    return 0;
}
