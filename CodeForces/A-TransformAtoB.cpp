#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll a, b, t; cin >> a >> b;
    unordered_map<ll, ll> m;
    bool fn = false;
    queue<ll> q;
    q.push(a);
    while(!q.empty()){
        t = q.front(); q.pop();
        if( t == b){
            fn = true;
            break;
        }
        if( 2*t <= b && (m.find(2*t) == m.end())){
            q.push(2*t);
            m[2*t] = t;
        }
        if( (10*t + 1 ) <= b &&  (m.find(10*t + 1) == m.end())){
            q.push(10*t + 1);
            m[10*t + 1] = t;
        }
    }
    if( !fn){
        cout << "NO\n";
    }else{
        vector<ll> ans;
        ll tm = b;
        while( tm != a){
            ans.push_back(tm);
            tm = m[tm];
        }
        ans.push_back(a);
        cout << "YES\n" << ans.size() << '\n';
        for( ll i = ans.size()-1; i >= 0; i--){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}