#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> ct (n);
    vector<bool> vs (n, false);
    for(auto &i: ct) cin >> i;
    map<int, vector<int>> adj;
    int b, e;
    for(int i = 0; i < n-1;i++){
        cin >> b >> e;
        if( b == e) continue;
        
        adj[b].push_back(e);
        adj[e].push_back(b);
    }
    int sm = 0; bool cld;
    queue<int> q; q.push(1);
    while (!q.empty()){
        b = q.front(); q.pop();
        cld = true;
        for(auto i: adj[b]){
            if(vs[i-1]) continue;
            cld = false;
            if(ct[i-1] == 0) q.push(i);
            else{
                if( (ct[i-1] + ct[b-1]) <= m ){
                    ct[i-1] += ct[b-1];
                    q.push(i);
                }
            }
        }
        vs[b-1] = true;
        if(cld){
            if(ct[b-1] <= m) sm++;
        }
    }
    cout << sm << '\n';
    return 0;
}