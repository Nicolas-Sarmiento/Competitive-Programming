#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n); for(auto &i : v) cin >> i;
        ll i, j ;
        for( i = 0 ; i < n-1 ; i++){
            if( v[i+1] != v[i] ) break;
        }
        for( j = n-1 ; j > 0; j--){
            if( v[j] != v[j-1]) break;
        }
        ll ans = 0;
        i++;j--;
        if( v[i-1] == v[j+1] ){
            ans = max(0ll, j-i+1);
        }else{
            ans = min(n-i, j+1);
        }
        cout << ans << '\n';
    }
    return 0;
}