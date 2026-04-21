#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        vector<string> m(8);
        for ( string &s: m ) cin >> s;
        string ans = "";
        
        for ( int r = 0; r < 8; r ++ ){
            for ( int c = 0; c < 8; c++ ) if (  m[r][c] != '.') ans +=  m[r][c];
        }
        cout << ans << '\n';
    }
    return 0;
}
