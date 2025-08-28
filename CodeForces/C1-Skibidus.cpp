#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m, b; cin >> n >> m;
        vector<ll> v (n); for (auto &i : v) cin >> i;
        cin >> b;
        bool c = true;
        v[0] = min(v[0], b - v[0]);
        for( ll i = 1; i < n; i++){
            if( min(v[i], b - v[i]) >= v[i-1]) v[i] = min(v[i], b - v[i]);
            else if( max(v[i], b-v[i]) >= v[i-1]) v[i] = max(v[i], b - v[i]);
            else c = false;
        }
        cout << (c ?  "YES": "NO") << '\n';
    }
    return 0;
}