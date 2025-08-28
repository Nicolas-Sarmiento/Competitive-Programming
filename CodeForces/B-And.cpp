#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, x, a; cin >> n >> x;
    unordered_set<ll> s1, s2;
    ll ans = 4;
    for( ll i = 0; i < n; i++){
        cin >> a;
        if( s1.count(a) > 0) ans = 0;
        else if( s1.count(a&x) > 0 || s2.count(a) > 0 ) ans = min(1ll, ans);
        else if( s2.count(a&x) > 0) ans = min(2ll, ans);

        s1.emplace(a);
        s2.emplace(a&x);
    }
    cout << (ans == 4 ? -1 : ans) << '\n';
    return 0;
}