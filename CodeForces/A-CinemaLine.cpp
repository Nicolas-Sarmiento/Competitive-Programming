#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n); for(auto &i : v) cin >> i;
    ll tw = 0, ft = 0;
    bool cn = true;
    for(ll i = 0; i < n; i++){
        if(v[i] == 25ll) { tw++;}
        else if( v[i] == 50  && tw > 0){ tw--; ft++;}
        else if ( v[i] == 100 && ft > 0 && tw > 0 ){ tw--; ft--;}
        else if ( v[i] == 100 && tw >= 3) { tw -= 3;}
        else { cn = false; break;}
    }
    cout << (cn? "YES":"NO") << '\n';
    return 0;
}