#include <iostream>
#include <vector>

using namespace std;
using ll = long long;
const vector<vector<ll>> directions = { {1,1}, {1,-1}, {-1,1}, {-1,-1} }; 

ll check_directions ( ll x_in, ll y_in, ll xk, ll yk, ll xq, ll yq ) {
    ll count = 0;
    ll attack_x = 0, attack_y = 0;
    for ( auto p : directions ) {
        attack_x = xk + (p[0] * x_in);
        attack_y = yk + (p[1] * y_in);
        
        count += (abs(xq - attack_x) == y_in && abs(yq - attack_y) == x_in ) || (abs(xq - attack_x) == x_in && abs(yq - attack_y) == y_in );
    }
    return count;
} 

void solve(){
    ll a, b, xk, yk, xq, yq; cin >> a >> b >> xk >> yk >> xq >> yq;
    ll ans = check_directions(a, b, xk, yk, xq, yq); 
    if ( a != b ) ans += check_directions(b,a, xk, yk, xq, yq);
    cout << ans << '\n';
}


int main(){
    int t; cin >> t;
    
    while ( t-- ){
        solve();
    }
}
