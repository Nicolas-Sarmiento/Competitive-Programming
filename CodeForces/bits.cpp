//completed
#include <iostream>
using namespace std;
int main(){
    int lines, x = 0;
    string cmd;
    cin >> lines;
    while (lines--)
    {
        cin >> cmd;
        if (cmd.find("++") != string::npos)
        {
            x++;
        }
        else
        {
            x--;
        }
        
    }
    cout << x << '\n';
    return 0;
}