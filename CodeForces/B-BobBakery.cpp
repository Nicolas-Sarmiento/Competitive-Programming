#include <iostream>
using namespace std;
int main(){
    int t;cin >> t;
    long long a,b,n, k, pr;
    while(t--){
        cin >> n >> a >> b;
        if (a >= b){
            cout << a*n << '\n';
            continue;
        }
        k = min(b-a, n);
        pr =((b*(b+1))/2) - ((b-k)*(b-k+1)/2) + (a * (n-k));
        cout << pr << '\n';
    }
    return 0;
}