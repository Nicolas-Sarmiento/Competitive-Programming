#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	ll mx = -1e9, sm = 0, xi;
	for ( ll i = 0; i < n; i++ ){
		cin >> xi;
		sm += xi;
		mx = max(mx, sm);
		if ( sm < 0 ) sm = 0;
	}
	cout << mx << '\n';
}
