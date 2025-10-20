#include <iostream>
#define  MAX 1000000
#define  MOD 1000000007

using namespace std;
using ll = long long;
ll dice_dp[ MAX + 7 ];

void s () {
	dice_dp[0] = 1;
	dice_dp[1] = 1;
	
	for ( int i = 2; i <= MAX; i++ ){
		for ( int j = 1; j <= 6; j ++ ){
			if ( (i - j) < 0 ) break;
			dice_dp[i] += dice_dp[i - j] % MOD;
		}
		dice_dp[i] = dice_dp[i] % MOD;
	}
}

int main() {
	int n; cin >> n;
	s();
	cout << dice_dp[n] << '\n';
	
}
