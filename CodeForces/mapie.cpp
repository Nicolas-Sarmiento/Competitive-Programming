//completed
#include <iostream>
#include <string>
using namespace std;
int main(){
    int times, n, rm = 0;
    string s, sub;
    cin >> times;
    while (times--)
    {
        cin >> n >> s;
        int i = 0;
        while (i < (n-2))
        {
            sub = s.substr(i, 3);
            if (sub != "map" && sub != "pie")
            {
                i++;
                continue;
            }

            i+=3;
            rm++;

        }
        
        cout << rm << '\n';
        rm = 0;
    }
    
    return 0;
}