#include <bits/stdc++.h>
using namespace std;

int main () {
  ios_base::sync_with_stdio(false);cin.tie(0);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    int tmp = 1;
    for(int i = 1; i < n ; i++){
      tmp++;
      if( s[i] != s[i-1] ){
        ans = max(ans, tmp);
        tmp = 1;
      } 
    }
    tmp++;
    ans = max(ans, tmp);
    cout << ans << '\n';
  }
  return 0;
}
