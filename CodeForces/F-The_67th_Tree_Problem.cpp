#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int x, y; cin >> x >> y;
        if ( (x + y) % 2 ) y--;
        else x--;
        
        if ( x < 0 || y < 0 || x > y ) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for ( int i = 0; i < y; i++ ) {
            cout << 1 << ' ' << (i+2) << '\n';
            
        }
        int v = y + 2;
        for ( int i = 0; i < x; i++ ) {
            cout << i + 2 << ' ' << ( v++ ) << '\n';
        }
        
    
    }
    return 0;
}
