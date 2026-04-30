#include <bits/stdc++.h>

using namespace std;

int inv( int i ) {
    return i ? 0 : 1;
}

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, k; cin >> n >> k;
        vector<int> a (n);
        for ( int &i : a ) cin >> i;
        cin >> k;
        k--;
        
        int cnt = 0;
        for ( int i = 0; i <= k; i++ ) {
            int tmp = !(cnt % 2) ? a[i] : inv(a[i]);
            if ( tmp != a[k] ) cnt++;
        }
        int ans = cnt;
        cnt = 0;
        for ( int i = n-1; i >= k; i-- ) {
            int tmp = !(cnt % 2) ? a[i] : inv(a[i]);
            if ( tmp != a[k] ) cnt++;
        }
        ans = max( ans, cnt );
        cout << ans << '\n';
    }
    
    return 0;
}
