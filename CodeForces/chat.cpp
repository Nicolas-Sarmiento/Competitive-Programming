
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string r = "hello";
    int a = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == r[a])
        {
            a++;
        }
        if (a == r.length())
        {
            cout << "YES\n";
            return 0;
        }
        
    }
    cout << "NO\n";
    return 0;
}