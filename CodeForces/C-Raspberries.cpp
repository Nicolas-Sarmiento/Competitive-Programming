#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> v (n); for( auto &i : v) cin >> i;
        ll ev = 0;
        ll mn = k;
        for( auto &i : v){
            ll a = k;
            for( ll j = 0; j <= k; j++){
                if( !((i+j) % k) ) a = min(a, j);
            }
            mn = min( a, mn );
            ev += !(i%2);
        }
        if( k == 4 ) mn = min(mn, max( 0ll , 2 - ev));
        cout << mn << '\n';
    }
    return 0;
}