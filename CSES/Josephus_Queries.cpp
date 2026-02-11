#include <iostream>

using namespace std;
using ll = long long;

ll josephus ( ll n, ll k ) {
    if ( n == 1 ) return 1;
    if ( k <= ((n+1)/2) ) 
        return 2 * k > n ? (2*k) % n : 2*k;
    ll x = josephus( n/2, k - ((n+1)/2) );
    if ( n % 2 ) return 2*x + 1;
    return 2 * x - 1;
}

int main(){
	int q; cin >> q;
	while (q--){
        ll n, k;
		cin >> n >> k;
		cout << josephus( n, k ) << '\n';
	}
	return 0;
}
