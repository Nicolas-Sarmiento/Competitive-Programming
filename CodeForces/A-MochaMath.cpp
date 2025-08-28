#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t;cin>> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    ll ans = v[0];
    for(ll i = 1; i < n;++i){
      ans = ans & v[i];
    }
    cout << ans << '\n';
  }
  return 0;
}
