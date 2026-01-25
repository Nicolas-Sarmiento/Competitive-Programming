#include <iostream>
#include <vector>

#define INF 1000000000000000000
using namespace std;
using ll = long long;


int main(){
    ll n, c;
    cin >> n >> c; 
    vector <ll> v (n);
    for ( ll &i : v ) cin >> i;
    vector <ll> dp ( c + 7, -1 );
    
    for ( ll i = 0 ; i < n; i++ ) {
        if ( v[i] > c || v[i] < 0 ) continue;
        dp [ v[i] ] = 1;
    }
    ll min_aux;
    for ( ll i = 1; i <= c; i++ ) {
        if ( dp [i] == 1 ) continue;
        min_aux = INF;
        for ( ll j = 0; j < n; j++ ) {
            if ( i - v[j] < 0 ) continue;
            if ( dp [ i - v[j]] == -1 ) continue;
            min_aux = min( min_aux, dp[ i - v[j]] );
        }
        if ( min_aux == INF ) continue;
        dp[i] = 1 + min_aux;
    }
    cout << dp[c] << '\n';
    return 0;
}
