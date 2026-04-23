#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> v ( 27, 0 );
        int ans = 0;
        for ( char c : s ) {
            if ( v[c - 'A'] ) { ans++; continue; }
            v[c-'A'] = 1;
            ans += 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
