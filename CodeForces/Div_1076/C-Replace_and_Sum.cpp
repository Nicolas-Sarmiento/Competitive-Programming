#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while ( t-- ){
        int n, q; cin >> n >> q;
        vector <ll> a ( n ) , b ( n ) ;
        for ( ll &i : a ) cin >> i;
        for ( ll &i : b ) cin >> i;
        
        a[n - 1] = max ( a[n-1] , b[n-1] );
        for ( int i = n-2; i >= 0; i-- ){
            a[i] = max( a[i+1], max ( a[i], b[i] ));
        }
        vector <ll> preff (n+2);
        preff[0] = 0;
        preff[1] = a[0];
        for ( int i = 1; i < n; i++ ){
            preff[i+1] = a[i] + preff[i];
        }
        int l, r;
        while ( q-- ) {
            cin >> l >> r;
            cout << preff[r] - preff[l-1] << ' ';
        }
        cout << '\n';
        
    }
    return 0;
}
