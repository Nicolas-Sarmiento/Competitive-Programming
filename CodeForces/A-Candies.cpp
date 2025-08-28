#include <iostream>
using namespace std;
int main(){
    int t, n, s; cin >> t;
    while(t--){
        cin >> n;
        s = 3;
        while (n % s != 0){
            s = (s*2)+1;
        }
        cout << n/s << '\n';
    }
    return 0;
}