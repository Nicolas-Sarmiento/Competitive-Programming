#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t; cin >> t;
  while(t--){
    ll n, l, r, a; cin >> n >> l >> r;
    ll ans = 0;
    vector<ll> v (n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    for(ll i = 0;i < n; i++){
      auto lb = lower_bound(v.begin(), v.end(), l - v[i] ) - v.begin();
      auto rb = upper_bound(v.begin(), v.end(), r - v[i]) - v.begin() ;
      ans += rb - lb;
      if( l <= 2*v[i] && 2*v[i] <= r) ans--;
    }
    cout << ans/2 << '\n';
  }

  return 0;
}
