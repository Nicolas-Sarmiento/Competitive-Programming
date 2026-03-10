#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        int ones = 0;
        for ( int i = 0; i < n; i++ ) ones += s[i] == '1';
        int mn, mx;
        for ( int i = 1; i < n-1; i++ ) {
            if ( s[i - 1] == '1' && s[i+1] == '1' ) {
                ones += s[i] == '0';
                s[i] = '1';
                i++;
            } 
        }
        mx = ones;
        for ( int i = 1; i < n-1; i++ ) {
            if ( s[i - 1] == '1' && s[i+1] == '1' ) {
                ones -= s[i] == '1';
                i++;
            } 
        }
        mn = ones;
        cout << mn << ' ' << mx << '\n';
        
    }
    return 0;
}
