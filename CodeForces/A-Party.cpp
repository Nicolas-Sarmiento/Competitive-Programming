#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n) ; for(auto &i : v) cin >> i;
    ll ix = 0, cnt = 0, mx = 1;
    for( ll i = 0; i < n; i++){
        ix = i;
        cnt = 1;
        while( v[ix] != -1){
            ix = v[ix] - 1;
            cnt++;
        }
        mx = max(mx, cnt);
    }
    cout << mx << '\n';
    return 0;
}