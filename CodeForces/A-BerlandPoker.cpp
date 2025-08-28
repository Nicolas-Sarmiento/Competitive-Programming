#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >>k;
        int x = min(n/k, m);
        int y = ((m-x)/(k-1))+ ((m-x) % (k-1) ? 1 : 0);
        cout << x - y << '\n';
    }
    return 0;
}