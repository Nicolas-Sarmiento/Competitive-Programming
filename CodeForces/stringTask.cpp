#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, r, v = "aeiouy";
    cin >> s;
    char aux;
    for (size_t i = 0; i < s.length(); i++)
    {
        aux = s[i] < 97 ? tolower(s[i]): s[i];
        if (v.find(aux) != string::npos)
        {
            continue;
        }
        r+= ".";
        r += aux;
    }
    cout << r << '\n';
    return 0;
}