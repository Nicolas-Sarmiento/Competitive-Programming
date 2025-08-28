#include <iostream>
#include <vector>
using namespace std;
void solve(){
    int n; cin >> n;
    vector <int> f (n);
    for(auto &x : f) cin >> x;
    int ans = f[n-1];
    for (int i = n-2; i >=0; i--){
        ans = max(ans+1, f[i]);
    }
    cout << ans << '\n';
}

int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}