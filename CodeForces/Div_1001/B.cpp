#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n);
        for(auto &i : v) cin >> i;
        bool cn = true;
        for(ll i = 0; i < n; i++){
            if( v[i] <= (2*max(i, (n-1)-i))) cn = false;
        }
        cout << (cn? "YES": "NO") << '\n';
    }
    return 0;
}