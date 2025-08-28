#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n); for(auto &i : v) cin >> i;
    for( ll i = 0; i < n ; i++){
        vector<bool> t ( n, false);
        ll cl = i;
        bool ct = false;
        while( !ct ){
            if( !t[cl]){
                t[cl] = true;
                cl = v[cl] - 1;
            }else{
                ct = true;
            }
        }
        cout << cl+1 << ' ';
    }
    cout << '\n';
    return 0;
}