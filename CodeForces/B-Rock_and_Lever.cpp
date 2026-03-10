#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for(int &i : a ) cin >> i;
        vector<int> z ( 33, 0 );
        
        ll ans = 0;
        for ( int i = 0; i < n; i++ ) {
            int zb = __builtin_clz(a[i]);
            ans += z[zb];
            z[zb]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
