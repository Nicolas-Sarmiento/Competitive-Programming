#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	vector<ll> coins (n);
	for( auto &i : coins ) cin >> i;
	sort(coins.begin(), coins.end());
	ll ans = 0;
	for( ll i = 0; i < n; i++ ){
		if ( (ans + 1) < coins[i] ) break;
		ans += coins[i];
	}
	cout << ans + 1 << '\n';
}
