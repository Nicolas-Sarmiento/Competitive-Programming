#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int up = 0, lo = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] < 'a')
        {
            up++;
        }
        else
        {
            lo++;
        }
        
    }

    if (up > lo)
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        
    }
    else
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        
    }
    cout << s << '\n';
    return 0;
}