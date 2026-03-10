#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd ( ll a, ll b ) {
    if ( b == 0 ) return a;
    return gcd( b , a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}


int main(){
    int t; cin >> t ;
    while (t--){
        ll n; cin >> n;
        ll best_a = 1;
        ll best_lcm = n;
        for ( ll i = 1; i * i <= n; i++ ) {
            if ( !(n % i) ) {
                ll a = i, b = n - a;
                ll l = lcm(a,b); 
                if ( l < best_lcm ) {
                    best_lcm = l;
                    best_a = i;
                }
                if ( i == 1 ) continue;
                a = n/i;
                b = n - a;
                l = lcm(a,b); 
                if ( l < best_lcm ) {
                    best_lcm = l;
                    best_a =  n/i;
                }
            }
        }
        ll b = n - best_a;
        cout << best_a << ' ' << b << '\n';
    }
    return 0;
}
