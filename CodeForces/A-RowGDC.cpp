#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gdc( ll a, ll b){
    if(b == 0) return a;
    return gdc(b, a%b);
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> a (n), b(m);
    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;
    ll mx = a.back();
    ll g = abs(a[0] - mx);
    for( ll i = 1; i < n-1; i++){
        g = gdc(g, abs(a[i] - mx));
    }
    for( ll j = 0; j < m; j++){
        cout << gdc(g,mx+b[j]) << ' ';
    }
    cout << '\n';
    return 0;
}