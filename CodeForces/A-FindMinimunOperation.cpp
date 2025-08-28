#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll cnt = 0;
        if( k == 1){
            cout << n << '\n';
            continue;
        }
        while( n ){
            cnt += n % k;
            n /= k;
        }
        cout << cnt << '\n';
    }
    return 0;
}