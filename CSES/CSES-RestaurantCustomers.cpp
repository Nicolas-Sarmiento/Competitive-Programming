#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n, a, b; cin >> n;
    vector<pair<ll,int>> events;
    for(ll i = 0; i < n; i++){
        cin >> a >> b;
        events.push_back({a,0});
        events.push_back({b, 1});
    }
    sort(events.begin(), events.end());
    ll cnt = 0, ans = 0;
    for(ll i = 0; i < events.size(); i++){
        if ( events[i].second ) cnt--;
        else cnt++;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
}