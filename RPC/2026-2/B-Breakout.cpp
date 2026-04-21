#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, m, ni; cin >> n >> x >> m;
    vector<int> cr (n+5, 0);
    for ( int i = 0;  i < m; i++ ) {
        cin >> ni;
        cr[ni]++;
    }
    
    int ans = 0;
    for ( int i = 1; i <= n; i++ ) {
        if ( i == x ) break;
        ans += cr[i];
    }
    ans = min( ans, m - ans );
    cout << ans << '\n';
    
    return 0;
}
