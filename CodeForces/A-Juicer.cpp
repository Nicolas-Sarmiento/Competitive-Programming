#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, b, d; cin >> n >> b >> d;
    vector<ll> v(n);
    for( auto &i : v )cin >> i;
    ll w = 0, ans = 0;
    for(auto i : v){
        if( i > b){
            continue;
        }
        w += i;
        if( w > d){
            w = 0;
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}