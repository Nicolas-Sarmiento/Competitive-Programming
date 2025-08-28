#include <iostream>
using namespace std;
int main(){
    int f, h, w= 0, fh; cin >> f >> h;
    while (f--){
        cin >> fh;
        w += fh > h ? 2 : 1;
    }
    cout << w << '\n';
    return 0;
}