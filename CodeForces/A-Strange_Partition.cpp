#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        ll x; cin >> x;
        ll ai, mx = 0, mn = 0;
        for ( int i = 0; i < n; i++ ){
            cin >> ai;
            mn += ai;
            mx += ai / x + (ai % x ? 1: 0) ;
        }
        mn = mn / x + ( mn % x ? 1 : 0);
        cout << mn << ' ' << mx << '\n';
    }
    return 0;
}
