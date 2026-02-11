#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> ans;
        for ( int i = n-1; i >= 0;  ) {
            string syll = "";
            if ( s[i] == 'a' || s[i] == 'e' ) {
                syll += s[i-1];
                syll += s[i];
                
                i -= 2;
                
            }else {
                syll += s[i-2];
                syll += s[i-1];
                syll += s[i];
                
                i-= 3;
            }
            
            ans.push_back( syll );
            
        }
        
        string res = "";
        
        for ( int i = (int) ans.size() - 1; i >= 0; i-- ) {
            res += ans[i];
            if ( i != 0 ) res += '.';
        }
        cout << res << '\n';
        
    }
}
