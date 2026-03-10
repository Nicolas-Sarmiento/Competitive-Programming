#include <bits/stdc++.h>

using namespace std;



int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        stack<char> st;
        for ( int i = 0; i < n; i++ ) {
            if ( !st.empty() && st.top() == s[i]) { st.pop(); continue; } 
            st.push(s[i]);
        }
        cout << ( st.empty() ? "YES" : "NO") << '\n';
    }
    return 0;
}
