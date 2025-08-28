#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
       ll n, cnt = 0, sm = 0, a; cin >> n;
       set<ll> s;
       s.emplace(0);
       for(int i = 0; i < n; i++){
            cin >> a;
            sm += a;
            if(s.count(sm)){
                cnt++;
                s.clear();
                sm = 0;
            }
            s.emplace(sm);
       }
       cout << cnt << '\n';
    }
    return 0;
}
