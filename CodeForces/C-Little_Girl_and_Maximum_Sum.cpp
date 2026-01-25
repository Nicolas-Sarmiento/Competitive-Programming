#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
    ll n, q, l, r; cin >> n >> q;
    vector<ll> nums (n);
    vector<ll> diff (n, 0);
    vector<ll> freq (n, 0);
    for ( ll &i : nums ) cin >> i;
    while ( q-- ){
        cin >> l >> r;
        l--;
        diff[l] += 1;
        if ( r < n ) diff[r] -= 1;
    } 
    freq[0] = diff[0];
    for ( ll i = 1; i < n; i++ ){
        freq[i] = freq[i-1] + diff[i];
    }
    sort( nums.begin(), nums.end() );
    sort( freq.begin(), freq.end() );
    
    ll ans = 0;
    for ( ll i = 0; i < n; i++ ){
        ans += nums[i] * freq[i];
    }
    cout << ans <<'\n';
}
