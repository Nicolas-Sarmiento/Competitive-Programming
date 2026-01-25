#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    ll n, x, y;
    while( t-- ) {
        cin >> n;
        if ( n == 2 || n % 2 ) {cout << -1 << '\n'; continue;}
        n /= 2;
        x = n / 2;
        y = n / 3 + ( n % 3 ? 1 : 0 );
        cout << y << ' ' << x <<'\n';
    }
    return 0;
}
