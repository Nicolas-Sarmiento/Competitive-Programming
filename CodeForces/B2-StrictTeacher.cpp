#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t, m, q; cin >> t;
    ll n, l, r, s, m1;
    while(t--){
        cin >> n >> m >> q;
        set<ll> M;
        for(int i = 0; i < m; i++){ cin >> m1; M.emplace(m1);}
        while (q--){
            cin >> s;
            if(M.lower_bound(s) != M.begin()){
                l = *(--M.lower_bound(s));
            }else{
                l = 0;
            }

            if(M.upper_bound(s) != M.end()){
                r = *M.upper_bound(s);
            }else{
                r = 0;
            }

            if(l == 0 && s < r){
                cout << r - 1 << '\n';
            }else if( r == 0 && s > l){
                cout << n - l << '\n';
            }else if( l < s && s < r){
                cout << (r-l)/2 << '\n';
            }else if(s < l){
                cout << l -1 << '\n';
            }else{
                cout << n - r << '\n';
            }
        }
    }
    return 0;
}