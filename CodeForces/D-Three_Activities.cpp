#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n; cin >> n;
        vector< vector<pair<ll,ll>> > days ( 3, vector<pair<ll,ll>>(n) );  
        
        for ( ll i = 0; i < 3; i++ ) {
            for ( ll j = 0; j < n; j++ ) { cin >> days[i][j].first; days[i][j].second = j; }
        }
        
       for ( int i = 0; i < 3; i++ ) sort( days[i].rbegin(), days[i].rend() );
       
       ll ans = 0;
       for ( int i = 0; i < 3; i++ ) {
            pair<ll,ll> n1 = days[0][i];
            for ( int j = 0; j < 3; j++) {
                pair<ll,ll> n2 = days[1][j];
                for ( int k = 0; k < 3; k++ ){
                    pair<ll,ll> n3 = days[2][k];
                    if ( n1.second == n2.second || n2.second == n3.second || n1.second == n3.second ) continue;
                    ans = max( ans, n1.first + n2.first + n3.first ); 
                }  
            }
       }
        
       cout << ans << '\n';
    
    }
    return 0;
}
