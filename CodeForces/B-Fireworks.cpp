#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    long long a, b, m, r = 0;
    while(t--){
        cin >> a >> b >> m;
        r = (m/a)+(m/b)+2;
        cout << r << '\n';
    }
    return 0;
}