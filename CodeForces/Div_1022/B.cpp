#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
       ll n, x; cin >> n >> x;
       ll bt = __popcount(x);
       
       if( bt >= n ){
            cout << x << '\n';
       }else{
        if( (x%2) ) bt--;
        ll k = n - bt;
        if ( ( x % 2 ) != (k % 2) ){
            k++;
        }
        cout << x + k <<'\n';
       }
    }
    return 0;
}