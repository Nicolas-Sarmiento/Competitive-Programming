#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        string s; cin >> s;
        int ab = 0, ba = 0;
        for ( int i = 0; i < (int) s.length()-1; i++ ){
            ba +=  s[i] == 'b' && s[i+1] == 'a'? 1 : 0;
            ab +=  s[i] == 'a' && s[i+1] == 'b'? 1 : 0;  
        }
        if ( ab > ba ) s[s.length() - 1] = 'a';
        if ( ba > ab ) s[0] = 'a';
        
        cout << s << '\n';
    }
    return 0;
}
