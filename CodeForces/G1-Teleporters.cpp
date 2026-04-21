#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, c, ai; cin >> n >> c;
        vector<ll> a (n);
        for ( int i = 0; i < n; i++ ){
             cin >> ai;
             a[i] = (i+1) + ai;
        }        
        sort( a.begin(), a.end() );
        ll ans = 0;
        for ( int i = 0; i < n ; i++ ) {
            if ( c >= a[i] ) { ans++; c -= a[i]; }
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}
