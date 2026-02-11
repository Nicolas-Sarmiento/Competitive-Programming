#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> s (n);
        for ( int i : s ) cin >> i;
        
        vector<int> ans (n);
        if ( s[0] >= n ) {
            cout << -1 << '\n';
            continue;
        }
        ans[0] = n;
        bool can = true;
        for ( int i = 1; i < n; i++ ) {
            if ( s[i] > i  ) { can = false; break; }
            
            ans[i] = i;
            
        }
        
        if ( !can ) cout << -1;
        else for ( int i : ans ) cout << i << ' ';
        cout << '\n';
        
    }
    return 0;
}
