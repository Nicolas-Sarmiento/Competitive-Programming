
#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int x=0, y=0, z=0, a;
    while( n-- ){
        cin >> a;
        x += a;
        cin >> a;
        y += a;
        cin >> a;
        z += a;
    }
    cout << (x == 0 && y == 0 && z == 0? "YES\n":"NO\n");
    return 0;
}