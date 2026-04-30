#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll l = 10000;
ll p = 99991;
vector<ll> a ( l + 2 );

void fill(){
    for ( int i = 0; i <= l; i++ ){
        a[i] = (p + i) * (p + i + 1);
    }
}


int main() {
    fill();
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        for ( int i = 0; i < n; i++ ) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
