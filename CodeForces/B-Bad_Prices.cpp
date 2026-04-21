#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i: a ) cin >> i;
        int mn = a.back();
        int ans = 0;
        for ( int i = n-2; i >= 0; i-- ) {
            if ( a[i] > mn ) ans++;
            mn = min(mn, a[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
