
#include <iostream>
using namespace std;
int main(){
    int a, b,c, t;
    cin >> t ;
    while( t--)
    {
        cin >> a >> b >> c ;
        if (b <= a || b == c )
        {
            cout << "NONE\n";
            continue;
        }
        if (b > c)
        {
            cout << "PEAK\n";
            continue;
        }
        cout << "STAIR\n";
    }

    return 0;
    
}