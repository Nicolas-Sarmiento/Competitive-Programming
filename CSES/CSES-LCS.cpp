#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> a (n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    vector<vector<ll>> dp (n+1, vector<ll>(m+1));
    
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= m; j++){
            if (i == 0 || j == 0 ) {dp[i][j] = 0; continue;}
            if ( a[i-1] == b[j-1] ) { dp[i][j] = dp[i-1][j-1] + 1; continue;}
            dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }

    cout << dp[n][m] << '\n';
    vector<ll> ans;
    while( n > 0 && m > 0){
        if( a[n-1] == b[m-1] ){
            ans.push_back(a[n-1]);
            n--;m--;
        }
        else if( dp[n-1][m] > dp[n][m-1]) n--;
        else m--;
    }


    for( ll i = ans.size() - 1; i >= 0; i--){
        cout << ans[i] << ' ';
    }
    cout << '\n';

    return 0;
}