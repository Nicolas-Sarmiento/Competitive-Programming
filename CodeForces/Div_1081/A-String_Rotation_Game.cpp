#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin>> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        for ( int i = 0; i < n; i++ ) {
            string aux = s.substr(i+1, (n-i) ) + s.substr( 0, i+1 );
            int tmp = 1;
           
            for ( int j = 1; j < n; j++ ) {
                if ( aux[j] == aux[j-1] ) continue;
                tmp++;
            }
            ans = max(tmp, ans);
        }
        cout << ans << '\n';
    }
    return 0;
}
