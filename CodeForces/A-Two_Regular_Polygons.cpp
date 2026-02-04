#include <iostream>

using namespace std;

int main() {
    int t; cin >> t; 
    while ( t-- ) {
        int n, m; cin >> n >> m;
        cout << ( max(m, n) % min(m,n) == 0 ? "YES": "NO" ) << '\n';
    }
    return 0;
}
