#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while ( t-- ) {
        int a, b; cin >> a >> b;
        int ans = ( abs(a - b ) / 10 ) + ( abs(a - b ) % 10 ? 1 : 0 );
        cout << ans << '\n';
    }
    return 0;
}
