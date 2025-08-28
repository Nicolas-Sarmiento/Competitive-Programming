#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k, q; cin >> n >> k >> q;
        vector<ll> v (n); for( auto &i : v) cin >> i;
        ll cnt = 0, i , j = 0;
        for( i = 0; i < n; i++){
            if( v[i] > q ) {
                if( (i - j) >= k){
                    cnt += (((i-j) - k + 1)*((i - j) - k+2))/2; 
                }
                j = i+1;
            }    
        }

        if( (i - j) >= k) cnt += (((i-j) - k + 1)*((i - j) - k+2))/2; 
        cout << cnt << '\n';
    }
    return 0;
}