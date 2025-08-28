//completed
#include <iostream>
using namespace std;
int main(){
    int n, a, b, c, p = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        if ((a && b) || (b && c) || (a && c))
        {
            p++;
        }
        
    }
    cout << p << '\n';
    return 0;
}