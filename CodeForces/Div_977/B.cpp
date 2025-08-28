#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, x, a; cin >> n >> x;
    map<ll,ll> mp;
    for(ll i = 0; i < n; i++){
        cin >> a;
        mp[a]++;
    }
    for(ll i = 0; i <= n; i++){
        if(!mp[i]){ cout << i << '\n';break;}
        if( mp[i] > 1){
            mp[i+x] += mp[i]-1;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
