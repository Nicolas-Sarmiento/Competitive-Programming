#include <iostream>
#include <map>
#include <utility>

using namespace std;
using ll = long long;

int main(){
	ll n, pi; cin >> n;
	map<ll, ll> sticks;
	for( ll i = 0; i < n; i++ ){
		cin >> pi;
		sticks[pi]++;
	}
	pair<ll, ll> mid_p = { 0, 0 };
	ll mid = 0, mid_position = (n/2) + ( n % 2 );
	for ( pair<ll,ll> p : sticks ){
		
		mid += p.second;
		if ( mid >= mid_position ){
			mid_p = p;
			break;
		}
	}
	pair<ll, ll> max_rp = { 0, 0 };
	for( pair<ll,ll> p : sticks ) {
		if ( p.second > max_rp.second )
			max_rp = p;
	}
	ll ans = 0, ans_mid = 0;
	for( pair<ll, ll> p : sticks ){
		ans += abs(p.first - max_rp.first) * p.second;
		ans_mid += abs(p.first - mid_p.first) * p.second;
	}
	cout << min(ans, ans_mid) << '\n';
	return 0;
}
