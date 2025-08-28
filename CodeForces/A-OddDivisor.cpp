#include <iostream>
using namespace std;
int main(){
    int times; cin >> times;
    long long n;
    bool odd;
    while (times--){
        cin >> n;
        odd = false;
        while (n > 1 && !odd){
            odd = n % 2 != 0; 
            n /= 2;
        }
        cout << (odd? "YES":"NO") << '\n';
    }
    
    return 0;
}

/* Better Solution: A number has no any odd divisors if it is a power of 2.
A power of 2 only has 1 bit. So if we apply AND operation with n-1  and get a 0. It means that
the number is a power of two.

    n&(n-1) == 0 -> true if n is a power of 2.

*/