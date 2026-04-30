#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i : a ) cin >> i;
        int ans = n < 3 ? n : 2;
        for ( int i = 0 ; i < n ; i++ ) cout << ans << ' ';
        cout << '\n';
    }
    return 0;
}
