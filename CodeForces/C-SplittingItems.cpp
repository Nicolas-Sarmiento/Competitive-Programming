#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n; cin >> t;
    ll k;
    while(t--){
        cin >> n >> k;
        vector<ll> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(), v.end(), greater<ll>());
        ll a = v[0];
        ll b = 0;
        ll in;
        for(int i = 1; i < n; i++){
            if(i%2 != 0){
                in = min(k, v[i-1]-v[i]);
                b += v[i] + in;
                k -= in;
            }else{
                a += v[i];
            }
        }
        cout << a-b << '\n';
    }
    return 0;
}