#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
       int n; cin >> n;
       vector<int> v (n);
       for(auto &i: v) cin >> i;
       ll lf = 0, rg = n-1, mn = 0;
        while(lf <= rg){
            if( lf > 0 && v[lf] == v[lf-1]) swap(v[lf], v[rg]);
            else if( rg < n-1 && v[rg] == v[rg+1]) swap(v[rg], v[lf]);
            rg--;
            lf++;
        }
        for(ll i = 0; i < n-1;i++){
            if( v[i] == v[i+1]) mn++;
        }
        cout << mn << '\n';
    }
    return 0;
}