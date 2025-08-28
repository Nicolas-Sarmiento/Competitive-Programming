//completed
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, r = "";
    int unique = 0;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (r.find(s[i]) == string::npos)
        {
            r += s[i];
        }
    }
    cout << ( r.length() % 2 ? "IGNORE HIM!": "CHAT WITH HER!" ) << '\n';
    return 0;
}