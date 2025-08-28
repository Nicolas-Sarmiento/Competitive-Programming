
#include <iostream>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    long long mid = n/2 + ( n%2 != 0? 1:0);
    if (k > mid)
    {
        cout << (k - mid) * 2 << '\n';
    }
    else{
        cout << (k*2) -1 << '\n';
    }
     
    return 0;
}