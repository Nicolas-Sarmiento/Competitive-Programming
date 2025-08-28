#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t, m, q; cin >> t;
    ll n, l, r, s, b1, b2;
    while(t--){
        cin >> n >> m >> q;
        cin >> b1 >> b2 >> s;
        l = min(b1, b2); r = max(b1,b2);
        if( l < s && s < r){
            cout << (r-l) /2 << '\n';
        }else{
            if( s < l) cout << l -1 << '\n';
            else cout << n -  r << '\n';
        }
    }
    return 0;
}