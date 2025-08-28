//completed
#include <iostream>
using namespace std;
int main(){
    string s;
    int r = 0, c = 0;
    for (size_t i = 1; i <= 5; i++)
    {
        getline(cin , s);
        if (s.find('1') != string::npos)
        {
            r = i;
            c = (s.find('1')/2) + 1;
            break;
        }   
    }
    int m = abs(r -3 ) + abs( c - 3);
    cout << m << '\n';
    return 0;
}