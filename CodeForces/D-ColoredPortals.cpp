#include<bits/stdc++.h>
using namespace std;
inline bool  intercept(string &sx, string &sy){
   for(auto &s: sx){
        for(auto &t: sy){
            if( t == s){
                return true;
            }
        }
    } 
    return false;
}
void solve(){
    int n, q, x,y; cin >> n >> q;
    map<string, set<int>> m;
    vector<string> v(n); for(auto &s : v) cin >> s;
    for(int i = 0; i < n; i++){
        m[v[i]].emplace(i);
    }

    while (q--){
        cin >> x >> y; x--; y--;
        if(x > y) swap(x, y);
        string sx = v[x], sy = v[y];
        if(intercept(sx, sy)){
            cout << y -x << '\n';
            continue;
        }
        int ans = 1e9;
        for(auto &[k, vl]: m){
            if(v[x] == k || v[y] == k) continue;
            auto it = vl.lower_bound(x);
            if(it != vl.end()) ans = min(ans, *it -x);
            if( it != vl.begin()){
                it--;
                ans = min(ans, y- *it);
            }
        }
        if(ans == 1e9){
            ans = -1;
        }else if( ans > y-x){
            ans = 2*(ans - (y-x)) + y-x;
        }else{
            ans = y -x;
        }
        cout << ans << '\n';
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}