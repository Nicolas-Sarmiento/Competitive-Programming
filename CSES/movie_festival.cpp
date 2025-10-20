#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

struct segment {
	ll begin;
	ll end;
	
	bool operator < (const segment& o ) const {
		return end < o.end;
	}
};


int main(){
	ll n; cin >> n;
	vector<segment> v (n);
	for( segment &s : v ){
		cin >> s.begin >> s.end;
	}
	
	sort(v.begin(), v.end());
	
	ll last = 0, ans = 0;
	for( segment s : v ){
		if ( s.begin >= last ) {
			last = s.end;
			ans++;
		}
	}
	cout << ans << '\n';
}
