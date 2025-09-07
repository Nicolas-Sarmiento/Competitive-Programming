#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll k, x; cin >> k >> x;
        ll ans = x;
        while(k--){
            ans *= 2;
        }
        cout << ans << '\n';
    }
}