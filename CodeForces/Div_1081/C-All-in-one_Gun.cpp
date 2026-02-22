#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, h, k; cin >> n >> h >> k;
        vector<ll> bll (n); 
        for ( ll &i : bll ) cin >> i;
        ll total = 0, mx = 0;
        for ( ll i : bll ) { total += i; mx = max(mx, i); } 
        ll ans = 0;
        if ( total < h ) {
            ll times = ( h / total ); 
            ans = (times * n) + ( times - 1) * k; 
        }else if ( total == h ) {
            cout << n << '\n';
            continue;
        }
        
        if ( h % total ) {
            ans += ( h > total ? k : 0 );
            h = h % total;
            ll acc = 0;
            vector<ll> pref_mx ( n, 0 );
            pref_mx[n-2] = bll[n-1];
            for ( ll i = n-3; i >= 0; i-- ) {
                pref_mx[i] = max( bll[i+1], pref_mx[i+1]);
            }
            
            ll mn = bll[0];
            for ( ll i = 0; i < n; i++ ) {
                
                mn = min (mn, bll[i]);
                acc += bll[i];
                ll dmg = acc + ( pref_mx[i] > mn ? pref_mx[i] - mn : 0  );
                if ( h - dmg <= 0 ) { ans += (i+1); break; } 
            }
            
        }
        
        cout << ans << '\n';
    }
    return 0;
}
