#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bs( vector<ll> &a, ll v){
    ll l = 0, r = a.size()-1;
    while(l <= r){
        ll md = l + (r-l)/2;
        if( a[md] <= v ) l = md+1;
        else r = md -1;
    }
    return l;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> a(n) , b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    sort(a.begin(), a.end());
    for(ll i = 0; i < m; i++){
        cout << bs(a, b[i]) << ' ';
    }
    return 0;
}