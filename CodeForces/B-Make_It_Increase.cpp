#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v (n);
        for( ll &i : v ) cin >> i;
        
        bool scc = true;
        ll ans = 0;
        for ( int i = n - 2; i >= 0; i-- ){
            if ( v[i+1] == 0 ) {
                scc = false;
                break;
            }
            
            while( v[i] >= v[i+1] ){ v[i] = v[i]/2; ans++; }
            
        }
        cout << (scc ? ans : -1 ) << '\n';
    }
    return 0;
}
