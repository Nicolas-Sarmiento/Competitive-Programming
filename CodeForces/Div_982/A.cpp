#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    ll a, b;
    while(t--){
        int n; cin >> n;
        vector<pair<ll,ll>> v (n);
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            v[i].first = a;
            v[i].second = b;
        }
        sort(v.begin(),v.end());
        ll p = 0, mw = 0, mh = 0, sh = 0 , sw = 0;
        for(int i = 0; i < n; i++){
            
        }
    }   

    return 0;
}