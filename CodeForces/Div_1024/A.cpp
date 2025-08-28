#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m , p, q; cin >> n >> m >> p >> q;
        if( !(n % p) ){
            cout << ((n/p)*q == m ? "YES" : "NO") << '\n';
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}