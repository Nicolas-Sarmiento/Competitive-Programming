#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, ix; cin >> n;
        vector<ll> v ( n ); for(auto &i : v) cin >>i;
        vector<ll> dp ( n+1, 0);
        for( ll i = 0 ; i < n; i++){
            ix = i + v[i] < n ? i + v[i] : n;
            dp[ix] = max( dp[ix] , dp[i] + v[i]);
        }
        cout << dp[n] << '\n';
    }
    return 0;
}