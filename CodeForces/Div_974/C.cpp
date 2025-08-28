#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, avg = 0; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            avg += v[i];
            v[i] = 2*n*v[i];
        }
        if( n >= 3){
            sort(v.begin(), v.end());
            ll mid = n/2;
            ll r = (v[mid] + 1 - avg) > 0 ? (v[mid] + 1 - avg) : 0; 
            cout << r <<'\n';
        }else{
            cout << -1 << '\n';
        }
    }
    


    return 0;
}