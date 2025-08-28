
#include <iostream>
using namespace std;
int main(){
    int times; cin >> times;
    int a,b = 0, row = 0, max = 0;
    while (times--){
        cin >> a;
        if (a >= b ){
            row++;
        }
        else {
            max = max > row ? max : row;
            row = 1;
        }
        b = a;
    }
    max = max > row ? max : row;
    cout << max << '\n';
    return 0;
}