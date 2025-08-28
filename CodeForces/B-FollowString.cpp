#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    vector<ll> alp (26,0);
    string ans;
    for(auto &i: v){
      for(ll j = 0; j < 26;++j){
        if(alp[j] == i ){
          ans.push_back(('a'+ j));
          ++alp[j];
          break;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
