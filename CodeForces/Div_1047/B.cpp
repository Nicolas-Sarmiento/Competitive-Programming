#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    vector<ll> v (n);
    for(auto &i : v) cin >> i;
    vector<ll> ans (n);
    for( ll i = 0; i < n; i++ ){
        ans[i] = (n+1) - v[i];
    }
    for(ll i : ans ){
        cout << i << ' ';
    }
    cout << '\n';
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin >> t;
    while (t--){
        solve();
    }
}