#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> v ( n );
        set<int> st;
        for ( int &i: v ) { cin >> i; st.insert(i); }
        
        if ( (int)st.size() != n ) {
            cout << -1 << '\n';
            continue;
        }
        
        
        sort(v.rbegin(), v.rend());
        for ( int i: v ) cout << i << ' ';
        cout << '\n';
        
    }
    return 0;
}
