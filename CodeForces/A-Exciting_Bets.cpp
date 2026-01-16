#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    ll a, b, exc, moves; 
    while (t--) {
        cin >> a >> b;
        exc = abs( a - b );
        moves = exc != 0 ? min( a % exc , exc - (a % exc)) : 0;
        cout << exc << ' ' << moves << '\n';
    }
    return 0;
}
