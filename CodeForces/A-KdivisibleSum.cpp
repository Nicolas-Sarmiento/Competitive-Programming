#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll b = n/k + (n%k?1:0);
        ll i = (k*b - n);
        ll j = i / n + (i%n? 1:0); 
        cout << 1+j << '\n';
    }
    return 0;
}