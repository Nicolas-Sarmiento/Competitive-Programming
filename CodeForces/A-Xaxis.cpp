#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t, a, b,c,d; cin >>t;
    while(t--){
        cin >> a >> b >> c;
        int r[] = {a,b,c};
        sort(r, r+3);
        d = (r[1] - r[0]) + (r[2]-r[1]);
        cout << d << '\n';
    }
    return 0;
}