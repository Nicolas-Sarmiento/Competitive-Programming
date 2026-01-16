#include <iostream>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t; 
    while ( t--) {
        ll n; cin >> n;
        ll i = 2;
        while ( !(n % i) ) i++;
        cout << --i <<'\n';
    }
    return 0;
}
