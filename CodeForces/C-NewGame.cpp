#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k,a; cin >> n >> k;
        vector<ll> v (n);
        for(auto &i: v) cin >> i;
        sort(v.begin(), v.end());
        ll lf = 0, mx = 0;
        for(ll i = 0; i < n-1;i++){
            
            while((v[i] - v[lf])+1 > k){
                lf++;
            }
            mx = max(mx, 1+i - lf);
            if( (v[i] + 1) < v[i+1]){
                lf = i+1;
            }
        }
        if((v[n-1] - v[lf])+1 <= k ){
            mx = max(mx, n - lf);
        }
        cout << mx << '\n';
    }
    return 0;
}