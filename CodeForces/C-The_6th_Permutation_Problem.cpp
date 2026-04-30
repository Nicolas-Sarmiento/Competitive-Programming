#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        int i = 1;
        int j = 3 * n;
        
        for ( int k = 0; k < 3 * n; k++ ) {
            if ( !( k % 3 ) ) { 
                cout << i << ' ';
                i++;
                continue;
            }
            
            cout << j << ' ';
            j--;
        }
        cout << '\n';
    }
    return 0;
}
