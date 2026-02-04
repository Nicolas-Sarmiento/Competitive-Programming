#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, k; cin >> n >> k;
        vector <ll> quest (n), quest_rep (n);
        for ( ll &i : quest ) cin >> i;
        for ( ll &i : quest_rep ) cin >> i;
        
        ll ans = 0, sum = 0, mx = 0;
        for ( ll i = 0; i < min(n, k); i++ ) {
            sum += quest[i];
            mx = max(mx, quest_rep[i]);
            ans = max( ans, sum + (mx * (k-(i+1))));
        }
        cout << ans << '\n';
    }
    return 0;
}
