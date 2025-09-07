#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(){
    ll a, b; cin >> a >> b;
    if ( a%2 && b%2 ){
        cout << (a*b) + 1;
    }else if ( !(a%2) && b%2 ){
        cout << -1;
    }else if ( !(a%2) && !(b%2) ){
        cout << ((b/2) * a) + 2;
    }else {
        if ( (b/2) % 2 ) cout << -1;
        else cout << ((b/2) * a) + 2;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t; cin >> t;
    while(t--){
        solve();
    }

}