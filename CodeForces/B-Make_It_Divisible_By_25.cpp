#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while( t--) {
        string n; cin >> n;
        int n_size =  (int)n.size();
        ll ans = n.size();
        ll tmp = 0;
        bool found = false;
        for ( int i = n_size - 1; i > 0; i-- ) {
            if ( n[i] != '5' &&  n[i] != '0' ) continue;
            tmp = n.size() - ( i+1);
            found = false;
            for ( int j = i-1; j >= 0; j--) {
                if ( (n[i] == '0' && (n[j] == '5' || n[j] == '0')) || ( n[i] == '5' && ( n[j] == '7' || n[j] == '2')) ) {
                    tmp += i - j - 1;
                    found = true;
                    break; 
                }    
            }
            ans = found ? min(ans, tmp) : ans;
        }
        cout << ans << '\n';
        
    }
    return 0;
}
