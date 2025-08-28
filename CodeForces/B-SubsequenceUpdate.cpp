#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, r, l; cin >> n >> l >> r;
        l--; r--;
        vector<ll> v (n); for(auto &i : v) cin >> i;
        vector<ll> bf;
        vector<ll> s;
        vector<ll> ar;
        for(ll i = 0; i < n; i++){
            if( i < l) bf.push_back(v[i]);
            else if( i > r) ar.push_back(v[i]);
            else s.push_back(v[i]);
        }
        sort(bf.begin(), bf.end());
        sort(s.rbegin(), s.rend());
        sort(ar.begin(), ar.end());
        ll sm1 = 0, sm2 = 0;
        for(ll i = 0; i < s.size(); i++){
            if( i < ar.size()){
                sm1 += min( s[i], ar[i]);
            }else{
                sm1 += s[i];
            }
            
            if( i < bf.size()){
                sm2 += min(s[i], bf[i]);
            }else{
                sm2 += s[i];
            }
        }
        cout << min(sm1, sm2) << '\n';
    }
    return 0;
}