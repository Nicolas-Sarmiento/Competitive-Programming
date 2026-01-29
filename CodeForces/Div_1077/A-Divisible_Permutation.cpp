#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> p ( n );
        int p1 = n, p2 = 1;
        for ( int i = 0; i < n; i++ ){
            if ( i % 2 ) { p[i] = p2; p2++; }
            else { p[i] = p1; p1--; }
        }
        for ( int i = n-1; i >= 0; i-- ) {
            cout << p[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
