#include <bits/stdc++.h>

using namespace std;
using ll = long long;


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const ll p = uniform_int_distribution<ll>(300, 1e9)(rng);

ll p_pow[400007];
const ll m = 1e9 + 9;

void calc_pow(){
    ll pow = 1;
    for ( int i = 0; i < 400000; i++ ) {
        p_pow[i] = pow % m;
        pow = ( pow * p ) % m;
    }
    
}


int main(){
    string s; cin >> s;
    calc_pow();
    
    
    int n = (int) s.length(); 
    vector<ll> preffix( n + 5 ) ;
    
    ll hash_value = 0;
    for ( int i = 0; i < n; i++ ) {
        hash_value = ( hash_value + ( s[i] - 'a' + 1) * p_pow[i] ) % m;
        preffix[i] = hash_value;
    }
    
    for ( int i = n/2; i < n - 1; i++ ) {
        int L = i + 1;
        int start_suffix = n - L;
        ll suffix_hash =  ( preffix[n - 1] - preffix[start_suffix - 1] + m) % m  ;
        ll preffix_hash = (preffix[i] * p_pow[start_suffix] )% m;
        if ( preffix_hash == suffix_hash ) {
            cout << "YES\n" << s.substr(0, L)<< '\n';
            return 0; 
        }
    }
    cout << "NO\n";
    return 0;
}
