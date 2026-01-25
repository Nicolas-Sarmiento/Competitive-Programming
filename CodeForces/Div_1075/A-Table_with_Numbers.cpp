#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main (){
    int t; cin >> t;
    while ( t-- ) {
        ll n, h, l; cin >> n >> h >> l;
        vector <ll> nums (n);
        for ( ll &i : nums ) cin >> i;
        ll big_nums = 0, small_nums = 0;
        for ( ll i = 0; i < n; i++ ) {
            if ( nums[i] > max(l,h) ) continue;
            if ( nums[i] > min(l,h) ) big_nums++;
            else small_nums++; 
        }
        ll ans = min( big_nums, small_nums ) + ( small_nums - min(small_nums, big_nums)) / 2;
        cout << ans << '\n'; 
    }
    return 0;
}
