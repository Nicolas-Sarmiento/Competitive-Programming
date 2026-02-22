#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd( ll a, ll b ) {
    if ( b == 0 ) return a;
    return gcd(b, a % b);
}

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<ll> a (n);
        for ( ll &i : a ) cin >> i;
        //sort(a.rbegin(), a.rend());
        int ans = 0;
        for ( int i = 1; i < n; i++ ) {
            for ( int j = 0; j < i; j++ ) ans += ( gcd(2 * a[i],  a[j]) > 1 || gcd( a[i], 2 * a[j] ) > 1) ;
        }
        cout << ans << '\n';
    }
    return 0;
}
