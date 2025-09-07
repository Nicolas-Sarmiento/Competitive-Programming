#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    int b1, b2, b3;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    int score1 = a1*1 + a2*2 + a3*3;
    int score2 = b1*1 + b2*2 + b3*3;

    if(score1 > score2){
        cout << 1 << endl;
    } else if (score2 > score1)
    {
        cout << 2 << endl;
    } else 
    {
        cout << 0 << endl;
    }

    return 0;
    
}