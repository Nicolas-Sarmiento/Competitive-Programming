#include <iostream>
using namespace std;
int main(){
    int t, m, b=0, gr=0;
    cin >> t;
    while(t--)
    {
        cin >> m;
        if (m != b)
        {
            gr++;
        }
        b = m;
    }
    cout << gr << '\n';
    return 0;
}