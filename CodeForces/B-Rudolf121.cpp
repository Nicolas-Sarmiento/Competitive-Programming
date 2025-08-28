#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n) ; for(auto &i : v) cin >> i;
        bool fd = true;
        for( ll i = 1; i < n-1; i++){
            if ( v[i-1] < 0) {fd = false; break;}
            v[i] -= 2*v[i-1];
            v[i+1] -= v[i-1];
            v[i-1] = 0;
            
        }
        fd = fd && v[n-1] == 0 && v[n-2] == 0;        
        cout << (fd? "YES": "NO") << '\n';
    }
    return 0;
}