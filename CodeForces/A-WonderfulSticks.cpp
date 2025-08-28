#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        string s; cin >> s;
        ll l = 1, r = n;
        vector<ll> ans (n);
        for( ll i = s.length()-1; i >= 0; --i){
            if( s[i] == '>'){
                ans[i + 1] = r;
                r--;
            }else{
                ans[i + 1] = l;
                l++;
            }
        }
        ans[0] = l;
        for(auto i : ans) cout << i << ' ';
        cout << '\n';
    }
    
    return 0;
}