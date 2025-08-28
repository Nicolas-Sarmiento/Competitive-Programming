#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //Can use long double for an easier way
    long long s;cin >> s;
    long long t;
    int m = 0;
    while(s > 1){
        m = s % 2 != 0 ? s%2 : m;
        s /= 2;
        t++;
    }
    if( m > 0 ){
        t++;
    }
    cout << t << '\n';
    return 0;
}