#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> s (n);
        for ( int &i : s ) cin >> i;
        
        vector<int> ans (n);
        bool sol = true;
        
        int l = 0;
        while ( l < n ) {
            int r = l;
            
            while ( r+1 < n && s[r+1] == s[l] ) r++;
            
            if ( l == r ) { sol = false; break; }
            
            for ( int i = l; i < r; i++ ) {
                ans[i] = i+2;
            }
            ans[r] = l + 1;
            
            l = r+1;
            
        }
         
        if ( !sol ) cout << -1;
        else for ( int i : ans ) cout << i << ' ';
        cout << '\n';
        
    }
    return 0;
}
