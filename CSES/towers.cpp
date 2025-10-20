#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	ll ki;
	multiset<ll> towers; 
	for ( ll i = 0; i < n; i++ ){
		cin >> ki;
		if ( towers.empty() ) {
			towers.insert(ki);
			continue;
		}
		
		auto it = towers.upper_bound(ki);
		if ( it != towers.end()){
			towers.erase(it);
		}
		towers.insert(ki);
		
		
	}

	cout << towers.size() << '\n';
}
