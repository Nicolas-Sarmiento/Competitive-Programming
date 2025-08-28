#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<ll> v (n); for(auto &i: v) cin >> i;

    ll l = v.front(), r = v.back(); 
    cout << abs(l - v[1]) << ' ' << abs( abs( l - r)) << '\n';
    for( ll i = 1 ; i < n -1; ++i ){
        cout << min( abs(v[i] - v[i+1]), abs(v[i] - v[i-1])) << ' ';
        cout << max( abs(v[i] - l), abs(v[i] - r)) << '\n';
    }

    cout << abs(r - v[n-2]) << ' ' << abs( abs( l - r)) << '\n';

    return 0;
}