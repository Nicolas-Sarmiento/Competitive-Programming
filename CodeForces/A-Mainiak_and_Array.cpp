#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
            int n; cin >> n;
            vector<int> a (n);
            for ( int &i : a ) cin >> i;
            int ans = a.back() - a.front();
            for ( int i = 0; i < n-1; i++ ) {
                ans = max( ans, a[i] - a[i+1] ); 
            }
            for ( int i = 1; i < n; i++ ) {
                ans = max ( ans, a[i] - a[0] );
            }
            for ( int i = 0; i < n-1; i++ ) {
                ans = max( ans, a[n-1] - a[i] );
            }
            cout << ans << '\n';
    }
    return 0;
}
