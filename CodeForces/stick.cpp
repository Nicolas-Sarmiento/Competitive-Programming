#include <iostream>
using namespace std;
int main(){
    int times, nSticks, aux;
    int sticks[101];
    int r = 0;
    int s = 0;
    int rm = 0;
    cin >> times;
    while (times--)
    {
        cin >> nSticks;

        for (size_t i = 1; i <= 100; i++)
        {
            sticks[i] = 0;
        }

        while (nSticks--)
        {
            cin >> aux;
            sticks[aux]++;
        }
        r = 0;
        for (size_t i = 1; i <= 100; i++)
        {
            r += sticks[i] / 3;
        }
        cout << r << '\n';
    }
    return 0;
}