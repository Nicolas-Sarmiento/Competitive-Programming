#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll ans = 1;
        for( ll i = 1; i * i <= n && i <= k; i++){
            if( !(n % i) ){
                ans = max(ans, i);
                if( (n/i) <= k) ans = max(ans, n/i);
            }
        }
        cout << n/ans << '\n';
    }
    return 0;
}