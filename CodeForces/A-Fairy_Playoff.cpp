#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        vector<int> s (4);
        int mx = 0;
        for ( int &i : s ) { cin >> i; mx = max( mx, i ); }
         
        int w1 = max( s[0], s[1] );
        int w2 = max( s[2], s[3] );
        sort( s.begin(), s.end() );
        
        cout << ( max(w1, w2) == s[3] && min(w1,w2) == s[2] ? "YES": "NO") << '\n'; 
        
        
    }
    return 0;
}
