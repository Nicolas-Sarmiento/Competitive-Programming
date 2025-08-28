//completed
#include <iostream>
using namespace std;
int main(){
    int n,m,a, l = 0, h = 0;
    cin >> n >> m >> a;
    l = (m / a) + ( m % a != 0 ? 1:0);
    h = (n / a) + ( n % a != 0 ? 1:0);
    long long r = (long long) l * h;
    cout << r << '\n';
    return 0;
}