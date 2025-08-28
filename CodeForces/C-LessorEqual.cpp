#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    map<ll, ll> m;
    ll n, k, a; cin >> n >> k;
    for(ll i = 0; i < n; i++){
        cin >> a;
        m[a]++;
    } 
    ll x = -1, cnt = 0, lt =  k == 0 && m.begin()->first > 1 ? 1 : -1;
    for( auto &i : m){
        if( cnt < k ){ cnt += i.second; lt = i.first;}
        
        if( cnt == k){x = lt;break;}

        if( cnt > k) break;
        
    }

    cout << x <<'\n';
    return 0;
}