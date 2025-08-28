#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n,mx, mn; cin >> n;
        vector<ll> v (n);
        for(auto &i: v) cin >> i;
        mx = v[0], mn = v[0];
        for(auto &i: v){
            mx = max(mx, i);
            mn = min(mn, i);
        }
        cout << (n-1)*(mx - mn) << '\n';
    }
    return 0;
}