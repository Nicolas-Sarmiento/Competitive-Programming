#include <iostream> 
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> nums (n);
	vector<bool> vis (n+1, false);
	for(int &i : nums) cin >> i;
	
	int ans = 0;
	for( int i : nums ){
		vis[i] = true;
		if ( vis[i-1] ) continue;
		ans++;
	}
	cout << ans << '\n';
}
