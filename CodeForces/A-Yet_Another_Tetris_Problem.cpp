#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i: a ) cin >> i;
        int aj = a[0];
        bool can = true;
        for ( int i = 1; i < n; i++ ) {
            if (  aj % 2 != a[i] % 2 ) { can = false; break; }
        }
        cout << ( can ? "YES": "NO" ) << '\n';
    }
    return 0;
}
