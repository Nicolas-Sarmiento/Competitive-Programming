#include <iostream>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    int t; cin >> t; 
    while ( t-- ) {
        ll n, k; cin >> n >> k;
        ll ans = power(n, k);
        cout << ans << '\n';
    }
    return 0;
}
