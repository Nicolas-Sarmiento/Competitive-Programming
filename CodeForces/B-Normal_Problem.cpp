#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    string a;
    while ( t--) {
        cin >> a;
        reverse(a.begin(), a.end());
        for ( char c : a ) {
            if ( c == 'w') cout << 'w';
            else if ( c == 'p' ) cout << 'q';
            else cout << 'p';
        }
        cout << '\n';
    }
    return 0;
}
