#include<bits/stdc++.h>
using ll = long long;
using namespace std;
ll mod = 1000000007LL;
int main(){
    int t; cin >> t;
    ll N, K, T;
    while(t--){
        cin >> N >> K;
        if ( N % 2 == 0){
            T = ((((N+2)/2)%mod * (N+1)%mod ) % mod * ((K+1)%mod))%mod;

        }else{
            T = ((((N+1)/2)%mod * (N+2)%mod ) % mod * ((K+1)%mod))%mod;
        }
        cout << T << '\n';
    }
    return 0;
}