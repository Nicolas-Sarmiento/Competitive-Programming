#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, t; cin >> n >> t;
    vector<ll> v(n); for(auto &s: v) cin >> s;
    ll l = 0;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        while (sum  > t){
            sum -= v[l];
            l++;
        }
        ans = max(ans, i-l+1);
    }
    cout << ans << '\n';
    return 0;
}