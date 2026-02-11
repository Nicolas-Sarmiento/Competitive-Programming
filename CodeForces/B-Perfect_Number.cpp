#include <iostream>

using namespace std;

int main() {
    int k; cin >> k;
    int count = 0;
    int number = 18;
    while ( count < k ) {
        number++;
        int sum = 0;
        int c = number;
        while ( c ) {
            sum += c % 10;
            c /= 10;
        }
        if ( sum == 10 ) count++;
    }
    cout << number << '\n';
    return 0;
}
