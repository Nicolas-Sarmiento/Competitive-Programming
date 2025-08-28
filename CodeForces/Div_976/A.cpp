#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ld n, k; cin >> n >> k;
        ld d, cnt = 0;
        if (k == 1){
            cnt = n;
        }else{
            while(n){
               d = floor(log(n)/ log(k));
               n -= pow(k, d);
               cnt++;
            }
        }
        
        cout << cnt << '\n';
    }

    return 0;
}