#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a (n);
        for (int &i : a ) cin >> i;
        int zeroes = 0;
        for (int i : a ) zeroes += i == 0;
        cout << (zeroes == 0 || ( (a[0] == 1 || a[n-1] == 1) && zeroes > 0) ? "Alice" : "Bob") << '\n';
    }
    return 0;
}
