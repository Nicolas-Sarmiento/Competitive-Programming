#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, x, t = 0; cin >> n >> x;
    for(ll i = 1; i * i <= x; i++){
        if(x % i == 0 && x/i <= n){
            t++;
            if( x/i != i) t++;
        }
    }

    cout << t <<'\n';
    return 0;
}