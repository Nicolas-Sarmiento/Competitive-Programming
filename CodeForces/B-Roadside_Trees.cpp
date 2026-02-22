#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> trees (n);
    for ( ll &i : trees ) cin >> i;
    ll ans = n + (n - 1) + trees[0];
    for ( ll i = 1; i < n; i++ ) {
        ans += abs( trees[i-1] - trees[i] );
    }
    cout << ans << '\n';
    return 0;
}
