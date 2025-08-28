#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s;
    bool isCaps = true;
    for (size_t i = 1; i < s.length(); i++)
    {
        if( islower(s[i]) ) { 
            isCaps = false;
            break;
        }
    }
    if( isCaps ){
        s[0] = isupper(s[0]) ? tolower(s[0]) : toupper(s[0]);
        for (size_t i = 1; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        
    }
    cout << s << '\n';
    return 0;
}