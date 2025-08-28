#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> p (n);
    vector<int> v (n , 0);
    for (auto &i : p) cin >> i;
    v[0] = 1;
    ll ans = 1;
    ll next = p[0] - 1;
    while ( !v[next]){
        ++ans;
        v[next] = 1;
        next = p[next] - 1; 
    }
    cout << ans << '\n';
    return 0;
}