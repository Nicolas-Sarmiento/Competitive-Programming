#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k, a; cin >> n >> k;
        vector<pair<ll,ll>> v (n);
        for(ll i = 0; i < n; i++){
            cin >> a;
            v[i].first = a % k ? a % k : k;
            v[i].second  = i+1;
        }
        sort(v.begin(), v.end(), [](const pair<ll,ll> &a, const pair<ll,ll> &b){
            return (a.first > b.first) || (a.first == b.first && a.second < b.second);
        }); 
        for(auto &i : v){
            cout << i.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}