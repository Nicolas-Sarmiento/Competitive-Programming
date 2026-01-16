#include <iostream>

using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        ll a, b, n, xi; cin >> a >> b >> n;
        ll ans = b;
        for (int i = 0; i < n ; i++) {
            cin >> xi;
            ans += min(a-1, xi);
        }
        cout << ans << '\n';
    }
    return 0;
}
