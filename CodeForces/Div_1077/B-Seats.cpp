#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ){
        int n; cin >> n;
        string s; cin >> s;
        if ( n == 1 ) {
            cout << 1 <<'\n';
            continue;
        }
        if ( n == 2 ) {
            cout << 1 <<'\n';
            continue;
        }
        vector<ll> occupied;
        occupied.push_back(0);
        ll ans = 0;
        for (ll i = 0; i < n; i++ ) {
            if ( s[i] == '1' ) { occupied.push_back(i+1); ans++; } 
        }
        
        if ( occupied.size() > 1 && occupied[1] >= 2 ) ans += ( occupied[1] - 2 ) / 3 + ( (occupied[1] - 2) % 3 ? 1 : 0);
        ll space = 0;
        for ( ll i = 2; i < (ll) occupied.size(); i++ ) {
            space = occupied[i] - occupied[i-1] - 3; 
            if ( space > 0 ) ans += space / 3 + (space % 3 ? 1 : 0);   
        }
        space = n - ( occupied.back() == 0 ? 0 : occupied.back() + 1 );
        if ( space > 0 ) ans += space / 3 + (space % 3 ? 1 : 0);
        
        cout << ans << '\n';
    }
    return 0;
}
