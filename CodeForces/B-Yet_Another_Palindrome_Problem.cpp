#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i : a ) cin >> i;
        bool found = false;
        for ( int i = 0; i < n - 1; i++ ) {
            for ( int j = n - 1; j > 0; j-- ) {
                
                if ( a[i] == a[j] && ( j - i ) > 1 ) { found = true; break; }
            }
            if ( found ) break;
        }
        cout << ( found ? "YES" : "NO" ) << '\n'; 
    }
    return 0;
}
