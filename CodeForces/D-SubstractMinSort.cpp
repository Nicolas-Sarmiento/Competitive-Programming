#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n); for(auto &i : v) cin >> i;
        bool cn = true;
        for(ll i = 0; i < n-1; i++){
            if( v[i] > v[i+1]) { cn = false; break;}
            v[i+1] -= v[i];
            v[i] = 0;
        }
        cout << (cn? "YES" : "NO") << '\n';
    }
    return 0;
}