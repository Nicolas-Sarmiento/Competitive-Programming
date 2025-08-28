#include <iostream>
using namespace std;
int main(){
    int t, b;
    cin >> t;
    while (t--)
    {
        cin >> b;
        if (b)
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}