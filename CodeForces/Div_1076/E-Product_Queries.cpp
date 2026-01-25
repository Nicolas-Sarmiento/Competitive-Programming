#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        set <ll> nums;
        ll ai;
        for ( int i = 0; i < n; i++ ){ cin >> ai; nums.insert(ai); }
        vector <ll> dp ( n+1 , -1 );
        for (int i = 1; i <= n; i++ ){
            if ( nums.find(i) != nums.end() )  dp[i] = 1;
            if (  dp[i] == -1 ) continue;
            
            for ( auto it = nums.begin(); it != nums.end(); it++ ){
                ll product =  i * (*it);
                if ( product > n ) continue;
                
                if ( dp[product] == -1 )  dp[product] = dp[i] + 1;
                else dp[product] = min(dp[i] + 1, dp[product]);
            }
        }
        for ( int i = 1; i <= n; i++ ) cout << dp[i] << ' ';
        cout << '\n';
    }
    return 0;
}
