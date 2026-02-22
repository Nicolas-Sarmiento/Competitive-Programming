#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int a,b,c,d; cin >> a >> b >> c >> d;
        int run[] = { a, b, c ,d };
        sort( run, run + 4);
        for ( int i = 0; i < 4; i++ ) {
            if ( run[i] == a ) cout << 3 - i << '\n';
        }
    }
}
