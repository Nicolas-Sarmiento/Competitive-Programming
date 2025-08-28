#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll ans, k;
        n--;
        if ( n % 2 ){
            k = (n+1) / 2;
            ans = (k*k) + 1; 
        }else {
            k = n/2;
            ans = k*(k+1) + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}