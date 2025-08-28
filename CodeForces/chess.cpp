
#include <iostream>
using namespace std;
int main(){
    char s;
    int l, d = 0,a = 0;
    cin >> l;
    while (l--)
    {
        cin >> s;
        if (s == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a == d)
    {
        cout << "Friendship\n";
    }
    else if ( a > d)
    {
        cout << "Anton\n";

    }
    else
    {
        cout << "Danik\n";
    }

    return 0;
}