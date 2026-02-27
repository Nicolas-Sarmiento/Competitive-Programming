#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}


int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n, x, y; cin >> n >> x >> y;
        ll min_nums = n / y;
        ll max_nums = n / x;
        ll com = n / lcm(x,y);
        
        ll min_limit = min_nums - com;
        ll max_limit = n - ( max_nums - com );
        
        
        ll min_sum = ( min_limit * ( min_limit + 1) ) / 2;
        ll max_sum = (( n * (n+1) ) / 2 )  -  (( max_limit * ( max_limit + 1) ) / 2 );
        cout << max_sum - min_sum << '\n';
    }
    return 0;
}
