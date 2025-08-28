#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int l = 0,  r = 0,ans = 0;
        while(r < n){
            while(r < n && !s.count(v[r])){
                s.insert(v[r++]);
            }
            ans = max(ans, r-l);
            s.erase(v[l++]);
        }
        cout << ans << endl;
    }
    return 0;
}