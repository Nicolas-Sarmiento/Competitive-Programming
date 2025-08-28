#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n); for(auto &i : v) cin >> i;
        vector<ll> b (n);
        set <ll> st;
        for(ll i = 0; i < n; i++){
            st.emplace(i+1);
        }
        for( ll i = 0; i < n; i++){
            if(st.count(v[i])){
                b[i] = v[i];
                st.erase(v[i]);
            }else{
                b[i] = *st.begin();
                st.erase(*st.begin());
            }
        }
        for(auto &i : b) cout << i <<' ';
        cout <<'\n';
    }
    return 0;
}