#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> v (n);
        
        for ( int &i: v ) cin >> i;
        int ones = 0;
        int zeroes = 0;
        for ( int i = 0; i < n; i++ ) { ones += v[i] == 1; zeroes += !v[i]; }
        ll ans = ones * ( 1LL << zeroes);
        cout << ans << '\n';
    }
    return 0;
}
