#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        ll n; cin >> n;
        vector <ll> a (n);
        for ( ll &i : a ) cin >> i;
        a[0] = a[0] == 1 ? 2 : a[0];
        for ( ll i = 1; i < n; i++ ) {
            if ( a[i] == 1 ) a[i]++;
            if ( ! (a[i] % a[i-1] ) ) a[i]++; 
        }
        for ( ll i : a ) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
