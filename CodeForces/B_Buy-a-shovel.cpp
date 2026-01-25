#include <iostream>

using namespace std;
using ll = long long;

int main(){
    ll k, r;
    cin >> k >> r;
    for ( ll i = 1; i <= 10 ; i++ ){
        if ( ((k  * i ) % 10) == r  || ( k * i ) % 10 == 0 ) {
            cout << i << '\n';
            break; 
        }
    }
}
