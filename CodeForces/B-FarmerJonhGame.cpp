#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m, ni; cin >> n >> m;
        vector<vector<ll>> v (n, vector<ll> (m));
        for(auto &i : v){
            for(auto &c : i) cin >> c;
        }
        vector <ll> p (n, 0);
        bool cn = true, sr;
        for(ll i = 0; i < n; i++){
            sort(v[i].begin(), v[i].end());
            ni = v[i][0];
            sr = true;
            for( ll j = 0; j < m; j++){
                if(v[i][j] != ((j*n) + ni)) sr = false;
            }
            if( !sr ){ cn = false; break;}
            else{
                p[ni] = i;
            }
        }
        if( cn ) for(auto &i : p) cout << i+1 << ' ';
        else cout << "-1";
        cout <<'\n';
    }
    return 0;
}