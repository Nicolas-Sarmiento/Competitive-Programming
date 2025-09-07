#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, a; cin >> n;
    ll real = 0, ans;
    for(ll i = 1; i< n; i++){
        cin >> a;
        real += a;
    }
    ans = ((n*(n+1))/2) - real;
    cout << ans << '\n'; 
}