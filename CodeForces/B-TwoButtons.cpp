#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, t; cin >> n >> m;
    queue<int> q;
    unordered_map<int, int> d;
    vector<bool> v (40007, false);
    d[n] = 0;
    q.emplace(n);
    while (!q.empty()){
        t = q.front(); q.pop();
        if( t == m){
            cout << d[t] << '\n';
            return 0;
        }
        if( t >= 1 && t <= 10000 && !v[t]){
            if(!v[t-1]){
                q.emplace(t-1);
                d[t-1] = d[t] + 1;
            }
            if(!v[2*t]){
                q.emplace(2*t);
                d[2*t] = d[t] + 1;
            }
        }
        v[t] = true;
    }
    return 0;
}