#include <iostream>

using namespace std;
using ll = long long;

void s ( ll mx, ll n ) {
    if ( mx - n ) cout << mx - n << ' ';
}

int main(){
    ll n1, n2, n3, n4; cin >> n1 >> n2 >> n3 >> n4;
    ll mx = max( n1, max( n2, max( n3, n4) ) );
    s(mx, n1);
    s(mx, n2);
    s(mx, n3);
    s(mx, n4);
    cout << '\n';
}
