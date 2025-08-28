#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = LLONG_MAX;
vector<ll> short_path(vector<vector<pair<ll,ll>>> &adj, ll s, ll n){
  vector<bool> vst (n, false);
  vector<ll> distance(n, INF);
  vector<ll> pred (n, -1);
  priority_queue<pair<ll, ll>> pq;
  pq.push({0, s});
  distance[s] = 0;
  while(!pq.empty()){
    ll a = pq.top().second; pq.pop();
    if( vst[a] ) continue;
    vst[a] = true;
    for(auto u : adj[a]){
      ll b = u.first, w = u.second;
      if( distance[a] + w < distance[b]) {
        distance[b] = distance[a] + w;
        pred[b] = a;
        pq.push({-distance[b], b});
      }
    }
  }
  return pred;
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  ll n, m; cin >> n >> m;
  vector<vector<pair<ll,ll>>> e (n);
  while(m--){
    ll a, b, w; cin >> a >> b >> w;
    e[a-1ll].push_back({b-1ll, w});
    e[b-1ll].push_back({a-1ll, w});
  }
  vector<ll> path = short_path(e, 0, n );
  stack<ll> st; 
  ll it = n-1;
  if( path[it] == -1 ){
    cout << -1 << '\n';
    return 0;
  }
  while( it != -1){
    st.push(it + 1);
    it = path[it];
  }
  while(!st.empty()){
    cout << st.top() << ' ';
    st.pop();
  }
  cout << '\n';
  return 0;
}
