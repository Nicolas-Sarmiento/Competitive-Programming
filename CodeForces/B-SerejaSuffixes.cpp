#include<bits/stdc++.h>
using namespace std;
int n, m, l;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> n >> m;
    vector<int> v (n);
    for(auto &i: v) cin >> i;
    vector<int> dp (n+5);
    unordered_set<int> s;
    for(int i = n-1; i >= 0; i--){
        s.emplace(v[i]);
        dp[i+1] = s.size();
    }
    while(m--){
        cin >> l;
        cout << dp[l] << '\n';
    }
    return 0;
}