#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, a, f; cin >> n;
        vector<ll> pre (n);
        set<ll> s;
        ll cnt = 0;
        for(ll i = 0; i < n; i++){
            cin >> a;
            if(i == 0){
                pre[i] = a;
            }else{
                pre[i] = a + pre[i-1];
            }
            s.emplace(a);
            if( !(pre[i] % 2) ){
                if(s.count(pre[i]/2) > 0) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}