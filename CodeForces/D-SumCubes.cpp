#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_set <ll> s;
ll MAX = 10005;

void fill(){
    for(ll i = 1; i <= MAX; i++){
        s.emplace(i*i*i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    fill();
    int t; cin >> t;
    while(t--){
        ll x, b; cin >> x;
        bool fd = false;
        for(ll i = 1; i*i*i < x; i++){
            b = x - (i*i*i);
            if( s.count(b) > 0){
                fd = true;
                break;
            }
        }
        cout << ( fd? "YES": "NO") << '\n';
    }
    return 0;
}