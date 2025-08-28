
#include <iostream>
#include <numeric>
using namespace std;
int main(){
    int times, i;
    long a, b, lmc;
    cin >> times;
    while( times-- )
    {
        cin >> a >> b;
        if ( b % a == 0)
        {
            cout << (b*(b/a)) << '\n';
            continue;
        }

        i = 2;
        lmc = b*i;
        while (lmc % a != 0 || lmc % b != 0)
        {
            lmc = b*i;
            i++;
        }

        cout << lmc << '\n';
    }
    return 0;
}