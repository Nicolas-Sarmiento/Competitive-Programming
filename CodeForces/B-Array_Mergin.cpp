#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n), b(n);
        
        for ( int &i : a ) cin >> i;
        for ( int &i : b ) cin >> i;
        a.push_back(0);b.push_back(0);
        map<int, int> m;
        int last = a[0];
        int count = 1;
        
        for ( int i = 1; i <= n; i++ ) {
            if ( a[i] == last ) { count++; continue; }
            m[last] = max( m[last], count );
            last = a[i];
            count = 1;
        }
        last = b[0];
        count = 1;
        map<int,int> m2;
        for ( int i = 1; i <= n; i++ ) {
            if ( b[i] == last ) { count++; continue; }
            m2[last] = max( m2[last], count );
            last = b[i];
            count = 1;
        }
        int ans = 0;
        for ( auto it = m.begin(); it != m.end(); it++ ) {
            
            if ( it->first == 0 ) continue;
            ans = max( ans, it->second + m2[it->first] );
        }
        
        for ( auto it = m2.begin(); it != m2.end(); it++ ){
            
            if ( it->first == 0 ) continue;
            ans = max( ans, it->second + m[it->first] );
        }
        
        cout << ans << '\n';
    }
}
