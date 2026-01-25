#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> v ( n );
    for ( ll &i : v ) cin >> i;
    ll sereja = 0, dima = 0;
    ll i = 0,  j = n-1;
    ll mx = 0;
    bool turn = 1;
    while ( i <= j ) {
        mx = max( v[i], v[j] );
        if ( mx == v[i] ) i++;
        else j--;
        
        if ( turn ) sereja += mx;
        else dima += mx;
        
        turn = !turn;
    }
    cout << sereja << ' ' << dima << '\n';
    return 0;
}
