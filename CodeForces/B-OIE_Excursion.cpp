#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, m; cin >> n >> m;
        vector<int> v ( n );
        for ( int &i : v ) cin >> i;
        bool can = true;
        int lst = -1;
        int l = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( v[i] == lst ) l++;
            else l = 1;
            
            if ( l >= m ) { can = false; break; }
            lst = v[i];
        }
        cout << (can ? "YES": "NO") << '\n';
    }
    return 0;
}
