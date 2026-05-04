#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, d; cin >> n >> d;
    vector<int> a (n);
    for( int &i : a ) cin >> i;
    sort(a.begin(), a.end());
    
    ll ans = 0;
    for ( int i = 0; i < n; i++ ) {
        ll diff = upper_bound(a.begin(), a.end(),a[i] + d) - a.begin();
        ans += diff - (i+1);
    }
    cout << ans * 2 << '\n';
    return 0;
}
