#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, z; cin >> n >> z;
        vector<int> a ( n );
        for ( int &i : a ) cin >> i;
        int ans = 0;
        for ( int i = 0; i < n; i++ ) ans = max( ans, a[i] | z );
        cout << ans << '\n';
    }
    return 0;
}
