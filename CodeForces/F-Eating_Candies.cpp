#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> candies (n);
        for( ll &i : candies ) cin >> i;
        vector <ll> alice (n), bob (n);
        alice[0] = candies[0];
        bob[n-1] = candies[n-1];
        for ( int i = 1; i < n; i++ ){
            alice[i] = candies[i] + alice[i-1];
            bob[n-1-i] = candies[n-1-i] + bob[n-i];
        } 
        
        ll ans = 0;
        for ( int i = 0; i < (n-1); i++ ){
            auto pt = lower_bound(bob.begin()+(i+1), bob.end(), alice[i], greater<ll>());
            if ( pt != bob.end()  && *pt == alice[i]) {
                ll j = bob.end() - pt; 
                ans = max( ans, (i + j + 1));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
