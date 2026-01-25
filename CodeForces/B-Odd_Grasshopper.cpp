#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    ll xo, n, inc;
    while ( t-- ) {
        cin >> xo >> n;
        inc = 0;
        n = n == 0 ? 4 : n;
        switch ( n % 4 ){
            case 0:
            break;
            case 1:
            inc = n;
            break;
            case 2:
            inc = -1;
            break;
            case 3:
            inc = - (n+1);
            break;
        }
        inc = xo % 2 ? inc : -inc;
        cout << xo + inc << '\n';
    }
    return 0;
}
