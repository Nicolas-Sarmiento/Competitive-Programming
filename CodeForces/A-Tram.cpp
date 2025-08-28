#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    int i, o, p = 0, c = 0;
    while (t--){
        cin >> o;
        cin >> i;
        p =  p - o + i;
        c = p > c ? p : c;
    }
    cout << c << '\n';
    return 0;
}