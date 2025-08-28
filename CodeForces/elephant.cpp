
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int r = n / 5 + ( n % 5 != 0 ? 1 : 0);
    cout << r << '\n';
    return 0;
}