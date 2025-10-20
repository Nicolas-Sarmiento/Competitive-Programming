#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	vector<ll> songs (n);
	for( ll &i : songs ) cin >> i;
	set<ll> window;
	ll lf = 0, rg = 0, ans = 1;
	
	window.insert( songs[0] );
	for ( rg = 1; rg < n ; rg ++ ){
		while ( window.count( songs[rg] ) != 0 ){
			window.erase( songs[lf] );
			lf++;
		}
		window.insert( songs[rg] );
		ans = max(ans, (ll)window.size());
	}	 
	cout << ans << '\n';
}
