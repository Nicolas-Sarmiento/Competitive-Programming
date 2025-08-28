#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m, bi; cin >> n >> m;
        vector<ll> a (n); for (auto &i : a) cin >> i;
        set<ll> b; for (ll i = 0; i < m; i++){ cin >> bi; b.emplace(bi);}
        a[0] = min(a[0], *b.lower_bound(1) - a[0]);
        bool c = true;
        for( ll i = 1; i < n; i++){
            auto mb = b.lower_bound(a[i] + a[i-1]);
            if( mb != b.end()){
                bi = *mb;
                if( min(a[i], bi - a[i]) >= a[i-1]) a[i] = min(a[i], bi - a[i]);
                else if( max(a[i], bi - a[i]) >= a[i-1]) a[i] = max(a[i], bi - a[i]);
                else c = false;
            }else{
                if( a[i] < a[i-1] ) c = false;
            }
        }
        cout << (c ?  "YES": "NO") << '\n';
    }
    return 0;
}