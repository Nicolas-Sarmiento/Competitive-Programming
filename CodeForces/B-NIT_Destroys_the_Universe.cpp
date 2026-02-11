#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for ( int &i : a ) cin >> i;
        
        bool can_count = true;
        int ans = 0;
        for ( int i = 0; i < n; i++ ) {
            if ( a[i] == 0 ) { can_count = true; continue; }
            
            if ( can_count ) { ans++; can_count = false; }
        }
        cout << min(ans,2) << '\n';
        
    }
    return 0;
}
