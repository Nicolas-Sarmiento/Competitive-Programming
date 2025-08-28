#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;
        if( c == 'g'){
            cout << 0 << '\n';
            continue;
        }
        ll ans = 0, ix = -1, ls = 0, fs = -1;
        for(ll i = 0; i < n; i++){
            if(s[i] == c && ix == -1) ix = i;
            if( s[i] == 'g' && ix != -1){
                ans = max( ans, i-ix);
                ix = -1;
            }
            if( s[i] == 'g' && fs == -1) fs = i;
        }
        if( ix != -1 ){
            ans = max(ans, n-ix+fs);
        }
        cout << ans << '\n';
    }
    return 0;
}
