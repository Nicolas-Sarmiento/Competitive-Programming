#include <bits/stdc++.h>

using namespace std;

int main(){
    int r, c; cin >> r >> c;
    if ( c == 1 ) {
        cout << 1 << '\n';
        return 0;
    }
    int ans = 0;
    if ( r == 1 ) ans = c / 3 + (c % 3 ? 1 : 0 );
    else if ( r == 2 ) ans = c / 2 + 1;
    else { cout << -1 << '\n'; return 0; }
    cout << ans << '\n';
     
    return 0;
}
