#include <iostream>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	ll exp1 = 2 * (n - 2) , exp2 = 2 * (n - 3);
	ll ans = 2 * 3 * ( 1LL << exp1) + ( (n-3) * 9 * (1LL << exp2) );
	cout << ans << '\n';
}
