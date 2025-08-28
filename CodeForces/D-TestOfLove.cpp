#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e9;
void solve(){
    ll n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    vector<ll> dp (n+20, INF);
    dp[n+1] = 0;
    for(ll i = s.length()-1; i >= 0; i--){
        if(s[i] == 'W'){
            dp[i+1] = dp[i+2]+1;
        }else if( s[i] == 'L'){
            ll mn = INF;
            for(int j = 1; j <= m; j++){
                mn = min(mn, dp[i+1+j]);
            }
            dp[i+1] = mn;
        }
    }
    ll mn = INF;
    for(int i = 1; i <= m; i++){
        mn = min(mn, dp[i]);
    }
    dp[0] = mn;
    cout << (dp[0] > k? "NO":"YES") << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}