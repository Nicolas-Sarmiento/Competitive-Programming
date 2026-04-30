#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, k; cin >> n >> k;
        vector<int> v (n);
        for ( int&i : v ) cin >> i;
        int sm = 0;
        for ( int i : v ) sm += i;
        
        cout << (sm % 2 || !((n*k) % 2) ? "YES" : "NO" ) << '\n';
    }
    return 0;
}
