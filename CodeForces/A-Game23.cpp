#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    ll r = m / n;
    if( !(m % n) ){
        ll cnt = 0;
        while( !(r%2)){
            r /=2;
            cnt++;
        }
        while( !(r%3)){
            r/=3;
            cnt++;
        }
        cout << (r != 1? -1: cnt) << '\n';
    }else{
        cout << -1 << '\n';
    }
    return 0;
}