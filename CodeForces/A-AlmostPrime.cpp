#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 3005;
vector<bool> pri (N, true);

void s(){
    for( ll i = 2; i*i <= N; i++){
        if( pri[i] ){
            for(ll p = i * i ; p <= N; p += i) pri[p] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    s();
    ll n; cin >> n;
    ll ans = 0;
    for(ll k = 2; k <= n; k++){
        unordered_set<ll> st;
        for( ll i = 2; i*i <= k; i++ ){
            if( !(k % i) ){
                if( pri[i] )   st.emplace(i);
                if ( pri[k/i] ) st.emplace(k/i);
            }
        }
        ans += st.size() == 2 ? 1 : 0;
    }
    cout << ans <<'\n';
    return 0;
}