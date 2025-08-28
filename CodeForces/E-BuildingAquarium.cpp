#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bs( ll x, ll n, vector<ll> &v, vector<ll> &sm){
    ll l = 1, r = v[n-1] + x / n;
    while(l <= r){
        ll mid = l + (r-l)/2;
        ll i = lower_bound(v.begin(), v.end(), mid) - v.begin();
        i = max(0ll, i-1);
        ll w = mid * (i+1) - sm[i]; 
        if ( w == x){
            return mid;
        }else if( w < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return l - 1;
}

void solve(){
    ll n, x; cin >> n >> x;
    vector<ll> sm (n);
    vector<ll> v (n); for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    sm[0] = v[0];
    for(ll i = 1; i < n; i++){
        sm[i] = sm[i-1] + v[i];
    } 
    cout << bs(x, n, v, sm) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}