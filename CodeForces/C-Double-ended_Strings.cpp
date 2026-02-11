#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        string a, b; cin >> a >> b;
        int ans = (int) a.size() +  (int) b.size();
        set<string> st;
        for ( int i = 0; i <=  (int) a.size(); i++ ) {
            for ( int p = 0; p < (int) a.size() - i ; p++ ) {
                st.insert(string (a.begin() + p , a.begin()+ p + i + 1));
            }
        }
        
        
        for ( int i = 0; i <=  (int) b.size(); i++ ) {
            for ( int p = 0; p < (int) b.size() - i ; p++ ) {
                string str = string (b.begin() + p , b.begin()+ p + i + 1);
                if ( st.find(str) == st.end() ) continue;
               
                ans = min(ans, (int)(a.size() - str.size()) + (int)(b.size() - str.size()) );
            }
        }
        
        cout << ans << '\n';
        
    }
    return 0;
}
