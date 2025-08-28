#include <iostream>
using namespace std;
int main(){
    int k,w,n;
    cin >> k >> w >> n;
    cout << std::max(k*n*(n+1)/2 - w, 0) << '\n';
}