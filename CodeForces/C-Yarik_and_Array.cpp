#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n; cin >> n;
        vector<ll> nums (n);
        for ( ll &i : nums ) cin >> i;
        
        int last_parity = (int) abs(nums[0]) % 2;  // odd true
        ll ans = nums[0];
        ll sub_sum = ans;
        for ( ll i = 1; i < n; i++ ){
           if ( (abs(nums[i]) % 2) == last_parity ) {
                ans = max( ans, sub_sum );
                sub_sum = nums[i];
           } else {
                sub_sum = max( sub_sum + nums[i], nums[i] );
           }
           ans = max( ans, sub_sum );
           last_parity = (int) abs(nums[i]) % 2;
        }
        ans = max( ans, sub_sum );
        cout << ans << '\n';
    }
    return 0;
}
