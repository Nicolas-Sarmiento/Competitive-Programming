#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n);
    vector<ll> dpu (n+5);
    vector<ll> dps (n+5);
    for(auto &i: v) cin >> i;
    dpu[0] = 0;
    for(ll i = 0; i < n; i++){
        dpu[i+1] = v[i] + dpu[i];
    }
    sort(v.begin(), v.end());
    dps[0] = 0;
    for(ll i = 0; i < n; i++){
        dps[i+1] = v[i] + dps[i];
    }
    ll m; cin >> m;
    while(m--){
        ll p, l , r; cin >> p >> l >> r;
        l--;
        if( p == 1){
            cout << dpu[r] - dpu[l] << '\n';
        }else{
            cout << dps[r] - dps[l] << '\n';
        }
    }
    
    return 0;
}