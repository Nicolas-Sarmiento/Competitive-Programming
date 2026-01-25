#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, s, x, ai; cin >> n >> s >> x;
        ll sum = 0;
        for ( ll i = 0; i < n; i++ ){
            cin >> ai;
            sum += ai;
        }
        if ( s - sum < 0 ) cout << "NO\n"; 
        else cout << ( (s - sum) % x == 0 ? "YES" : "NO") << '\n';
    }
    return 0;
}
