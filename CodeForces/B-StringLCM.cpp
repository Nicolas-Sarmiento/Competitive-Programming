#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int q; cin >> q;
    while(q--){
        string s, t; cin >> s >> t;
        ll lcm = (s.size()*t.size())/__gcd(s.size(),t.size());
        ll ls = lcm / s.size();
        ll lt = lcm / t.size();
        string cs , ct;
        for(ll i = 0; i < ls; i++){
            cs.append(s);
        }
        for( ll i = 0; i < lt; i++){
            ct.append(t);
        }
        cout << (ct == cs? cs : "-1") << '\n';
    }
    return 0;
}