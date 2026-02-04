#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        set<string> sf;
        string preff;
        for ( int i = 0; i < (2*n - 2); i++ ){
            cin >> preff;
            string reversed = string(preff.rbegin(), preff.rend());
            if ( sf.count(reversed) > 0 ) continue;
            sf.insert(preff);
        }
        
        cout << ((int)sf.size() == (n-1) ? "YES": "NO") << '\n';
        
    }
    return 0;
}
