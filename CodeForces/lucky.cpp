#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int digits = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '7' || s[i] == '4') digits++;
    }

    cout << (digits == 7 || digits == 4 ? "YES":"NO") << '\n';
    
    return 0;
}