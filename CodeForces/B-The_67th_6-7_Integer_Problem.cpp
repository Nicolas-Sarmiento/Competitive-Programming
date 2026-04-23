#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        vector<int> v (7);
        for ( int &i : v ) cin >> i;
        sort( v.rbegin(), v.rend() );
        int ans = v[0];
        for ( int i = 1; i < (int) v.size(); i++ ) ans += - v[i];
        cout << ans << '\n';
    }
    return 0;
}
