#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i : a ) cin >> i;
        sort( a.begin(), a.end() );
        bool can = true;
        for ( int i = 1; i < n; i++) {
            if ( (a[i] - a[i-1]) > 1 ) { can = false; break; }
        }
        cout << (can ? "YES" : "NO" ) << '\n';
    }
    return 0;
}
