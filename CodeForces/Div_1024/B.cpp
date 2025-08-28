#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
       ll n; cin >> n;
       vector<ll> v(n);
       for(auto &i :  v) cin >> i;
       ll val =  v[0];
       v.push_back(-val);
       sort(v.begin(), v.end());
       ll md = v[n/2 - (!(n%2)? 1 : 0)];
       if( val == md || val == -md){
        cout <<  "YES\n";
        continue;
       }

       auto it_val1 = lower_bound(v.begin(), v.end(), val);
       auto it_val2 = lower_bound(v.begin(), v.end(), -val);
       auto it_md = lower_bound(v.begin(), v.end(), md);
       ll diff1 = abs( (it_val1 - v.begin()) - (it_md - v.begin()));
       ll diff2 = abs( (it_val2 - v.begin()) - (it_md - v.begin()));
       if( val < md ){
           it_val1++;
          for( ; it_val1 != v.end(); it_val1++ ){
                if( -(*it_val1) < val  ) diff1--;
                if( !diff1 ) break;
          }
          if( !diff1 ){
            cout << "YES\n";
            continue;
          }
          for( auto it = v.begin(); it != it_val2; it++){
            if( -(*it) > (-val)  ) diff2--;
                if( !diff2 ) break;
          }
          cout << (!diff2 ? "YES" : "NO") << '\n';
       }else{
            
            for( auto it = v.begin(); it != it_val1; it++ ){
                if( -(*it) > val  ) diff1--;
                if( !diff1 ) break;

            }
            if( !diff1 ){
                cout << "YES\n";
                continue;
            }
            it_val2++;
            for( ; it_val2 != v.end(); it_val2++ ){
                if( -(*it_val2) < (-val)  ) diff2--;
                if( !diff2 ) break;
            }
            cout << (!diff2 ? "YES" : "NO") << '\n';
       }
    }
    return 0;
}