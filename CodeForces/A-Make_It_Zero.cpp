#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n; cin >> n;
        vector <ll> a (n);
        for ( ll &i : a ) cin >> i;
        ll k = 2;
        cout << ( n % 2 ? k+2 : k ) << '\n';
        cout << 1 << ' ' << n << '\n';
        
        if ( n % 2 ) {
            cout << 1 << ' ' << n-1 << '\n'; 
            cout << n-1 << ' ' << n << '\n'; 
            cout << n-1 << ' ' << n << '\n'; 
        }else {
            cout << 1 << ' ' << n << '\n';
        }
        
    }
    return 0;
}
