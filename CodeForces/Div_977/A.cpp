#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v (n); for(auto &i: v) cin >> i;
        sort(v.begin(),v.end());
        ll x = 0;
        x = (v[0]+v[1])/2;
        for(int i = 2; i < n; i++){
            x = (v[i]+x)/2;
        }
        cout << x <<'\n';
    }
    return 0;
}
