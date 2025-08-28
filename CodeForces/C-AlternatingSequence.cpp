#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n);
        for(auto &i: v) cin >> i;
        vector<ll> dp (n+5);
        int p = v[0] > 0 ? -1 : 1;
        ll ps = 0 ;
        dp[0] = 0;
        dp[1] = v[0];
        ps = 0;
        for(ll i = 1; i < n; i++){
            if( v[i] * p > 0){
                dp[i+1] = dp[i] + v[i];
                p *= -1;
                ps = i;
            }else{
                dp[i+1] = max(dp[i], v[i] + dp[ps]);
            }
        }
        cout << dp[n] << '\n';

    }
    return 0;
}