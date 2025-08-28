
#include <iostream>
using namespace std;
int main(){
    int a, b, r = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << 1 << '\n';
        return 0;
    }

    while (a <= b)
    {
        a *=3;
        b *=2;
        r++;
    }
    
    cout << r << '\n';
    return 0;
}