#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll l, r; cin >> l >> r;
    ll n = l + r;
    if( n%2 && (l == (n+1)/2)){
        cout << n;
    }else if ( !(n%2) && (l == (n/2) || l == ((n/2)+1))){
        cout << (3*n) / 2;
    }else {
        cout << 2 * n;
    }
    cout <<'\n';
}