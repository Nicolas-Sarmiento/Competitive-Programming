//completed
#include <iostream>
#include <string>
using namespace std;
int main(){
    int lines;
    string s;
    cin >> lines;
    while (lines--)
    {
        cin >> s;
        if ( s.length() > 10 )
        {
            cout << s[0] << (s.length() - 2) << s[s.length() - 1] << '\n';
        }
        else{
            cout << s << '\n';
        }   
    }
    return 0;
}