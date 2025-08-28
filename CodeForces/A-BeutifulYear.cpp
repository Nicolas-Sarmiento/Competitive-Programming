#include <iostream>
using namespace std;
int main(){
    int y, a, b, c, d; cin >> y;
    bool bYear = false;
    while (!bYear){
        y++;
        a = (y/1000);
        b = (y%1000)/100;
        c = (y%100)/10;
        d = y%10;

        bYear = a != b && a != c && a != d && b != c && b != d && c != d;
    }
    cout << y << '\n';
    return 0;
}