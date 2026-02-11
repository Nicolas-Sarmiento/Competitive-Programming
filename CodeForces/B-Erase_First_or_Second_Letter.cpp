#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        if ( n == 1 ) { cout << 1 << '\n'; continue; }
        map<char, int> m;
        for ( char c : s ) m[c]++;
        
        ll ans = 1 + (ll) m.size();
        for ( int i = n-1; i > 1; i-- ) {
            m[s[i]]--;
            if ( m[s[i]] <= 0 ) m.erase(s[i]);
            ans += (ll) m.size();
        }
        cout << ans << '\n';
        
    }
    return 0;
}
