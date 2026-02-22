#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while ( t-- ) {
        int n, ai; cin >> n;
        vector<int> nums ( 1005, -1 );
        for ( int i = 1; i <= n; i++ ) {
            cin >> ai;
            nums[ai] = max( i, nums[ai] );
        }
        int ans = -1;
        for ( int i = 1; i <= 1000; i++ ) {
            if ( nums[i] == -1 ) continue;
            for ( int j = 1; j <= 1000; j++) {
                if ( nums[j] == -1 ) continue;
                if ( gcd( i, j ) == 1 ) ans = max( nums[i] + nums[j], ans); 
            }
        }
        cout << ans << '\n';
        
    }
    return 0;
}
