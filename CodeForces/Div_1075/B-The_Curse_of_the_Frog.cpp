#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, x, a, b, c; cin >> n >> x;
        ll best_move = 0;
        ll free_distance = 0;
        for ( ll i = 0; i < n; i++ ){
            cin >> a >> b >> c;
            free_distance += a * (b-1);
            best_move = max( best_move, a*b - c);
        }
        if ( free_distance >= x ) {
            cout << 0 <<'\n';
            continue;
        }
        x -= free_distance;
        if ( best_move == 0 ) cout << -1 << '\n';
        else cout << x / best_move + (x % best_move ? 1 : 0) << '\n';
        
    }
    return 0;
}
