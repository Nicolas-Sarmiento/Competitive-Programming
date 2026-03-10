#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        int a = 1, b = 0;
        int i = n - 1;
        int c = 1;
        bool turn = true;
        
        while ( i > 0 ) {
            c += 4;
            int m = min(c, i); 
            if ( turn ) b+= m;
            else a += m;
            i -= m;
            turn = !turn;
        }
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
