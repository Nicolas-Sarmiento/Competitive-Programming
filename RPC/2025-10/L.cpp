#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll t; cin >> t;

    if ( t <= 360 ) cout << 0;
    else if ( t <= 390 ) cout << t - 360;
    else if ( t <= 570 ) cout << 30;
    else if ( t <= 570 ) cout << 30;
    else if ( t <  585 ) cout << 30 + (t - 570);
    else if ( t <= 645 ) cout << 45;
    else cout << t - 600;
    cout << '\n';
}