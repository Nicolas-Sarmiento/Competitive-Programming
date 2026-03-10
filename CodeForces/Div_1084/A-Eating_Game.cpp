#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for (int &i : a ) cin >> i;
        sort( a.rbegin(), a.rend());
        int ans = 1;
        for ( int i = 1; i < n; i++ ) {
            if ( a[i] != a[i-1] ) break;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
