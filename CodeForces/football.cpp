
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string dan1 = "1111111", dan2 = "0000000";
    if (s.find(dan1) != std::string::npos || s.find(dan2) != std::string::npos)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}