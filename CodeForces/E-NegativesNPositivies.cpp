#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll ng = 0;
        vector<ll> v (n); 
        for(auto &i : v){
            cin >> i;
            ng += i < 0;
            i = abs(i);
        }
        sort(v.begin(), v.end());
        ll sm = ng % 2 ? -v[0] : v[0];
        for( ll i = 1; i < n; i++){
            sm += v[i];
        }
        cout << sm << '\n';
    }
    
    return 0;
}