#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        int z = 0, o = 0;
        for ( char c : s ) { 
            if ( c == '1' ) o++;
            else z++;
        }
        if ( z == n ) {
            cout << 0 << '\n';
            continue;
        }
        vector<int> idx;
        if ( z % 2 ) {
            for ( int i = 0; i < n; i++ ) if (s[i] == '0') idx.push_back(i+1);
        } else if ( ! (o % 2 ) ) {
            for ( int i = 0; i < n; i++ ) if (s[i] == '1') idx.push_back(i+1);
        }else {
            cout << -1 << '\n';
            continue;
        }
        
        cout << (int) idx.size() << '\n';
        for ( int i : idx ) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
