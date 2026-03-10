#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, x; cin >> n >> x;
        vector<ll> a (n);
        for ( ll &i : a ) cin >> i;
        
        ll sum1 = 0, sum2 = 0;
        for ( ll i = 0; i < n; i++ ) {
            sum1 += a[i];
        }
        
        ll l = 0;
        ll r = n-1;
        ll ans1, ans2;
        sum2 = sum1;
        while ( !(sum1 % x) && l < n  ) {
                sum1 -= a[l];
                l++;
        }
        
        ans1 = n - l > 0 ? n - l : -1;
        
        while ( !(sum2 % x) && r >= 0  ) {
                sum2 -= a[r];
                r--;
        }
        ans2 = r+1 > 0 ? r+1 : -1;
        cout << max(ans1,ans2) << '\n';
        
    }
    return 0;
}
