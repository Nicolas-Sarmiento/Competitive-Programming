#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll S [1000005];
void s(){
    memset(S, 0, sizeof(S));
    S[2020] = 1; S[2021] = 1;
    for(ll i = 4040; i < 1000005; i++){
        if( S[i - 2020] || S[i - 2021]) S[i] = 1;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    ll n;
    s();
    while(t--){
        cin >> n;
        cout << (S[n] ? "YES": "NO") << '\n';
    }
    return 0;
}