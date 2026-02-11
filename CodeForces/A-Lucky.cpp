#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        string n; cin >> n;
        int sum_first = (n[5] - '0') + (n[4] - '0') + (n[3] - '0');
        int sum_second = (n[2] - '0') + (n[1] - '0') + (n[0] - '0');
        cout << (sum_first == sum_second ? "YES": "NO") << '\n';
    }
    return 0;
}
