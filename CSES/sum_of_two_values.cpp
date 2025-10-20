#include<iostream>
#include<ios>
#include<vector>
#include<algorithm>


using namespace std;

using ll = long long;

struct number {
	ll index;
	ll value;
	
	bool operator < ( const number& o ) const {
		return value < o.value;
	}
	
	bool operator == (const number& o ) const {
		return index == o.index;
	}
};

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	ll n, x; cin >> n >> x;
	vector<number> nums (n);
	for(ll i = 0; i < n; i++ ) {
		cin >> nums[i].value;
		nums[i].index = i+1;
	}
	
	sort(nums.begin(), nums.end());
	bool c = false;
	ll ii, ij;
	number to_find = {0,0};
	for( int i = 0; i < n; i++ ){
		to_find.value = abs(x - nums[i].value);
		auto it = lower_bound(nums.begin(), nums.end(), to_find);
		if ( it == nums.end() ) continue;
		if ( it->index == nums[i].index ) continue;
		if ( it->value + nums[i].value != x ) continue;
		c = true;
		ii = nums[i].index;
		ij = it->index;
		break;
	}
	if ( c )
		cout << ii << " " << ij << '\n';
	else 
		cout << "IMPOSSIBLE\n";
	
	return 0;
}
