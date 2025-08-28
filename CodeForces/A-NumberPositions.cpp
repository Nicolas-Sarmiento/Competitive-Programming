#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b; cin >> n >> a >> b;
    int mx = max( n-b, a + 1);
    cout << n +1 - mx << '\n';
    return 0;
}