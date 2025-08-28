#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >>t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        set<char> s1, s2;
        vector<ll> sz1 (n), sz2 (n);
        for(ll i = 0; i < n; i++){
            s1.emplace(s[i]);
            sz1[i] = s1.size();
        }
        for(ll i = n-1; i >= 0; i--){
            s2.emplace(s[i]);
            sz2[i] = s2.size();
        }
        ll mx = 0;
        for( ll i = 0; i < n-1; i++){
            mx = max(mx, sz1[i] + sz2[i+1]);
        }
        cout << mx << '\n';
    }
    return 0;
}