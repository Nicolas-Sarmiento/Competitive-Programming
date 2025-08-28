#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt, n, m; cin >> tt;
    while(tt--){
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cin >> m;
        string s;
        for(int i = 0; i < m; i++){
            unordered_map<char, int> ms;
            unordered_set<int> as;
            cin >> s;
            int idx = 0;
            bool y = true;
            if( s.length() != a.size()){
                cout << "NO\n";
                continue;
            }
            for(int is = 0; is < s.length(); is++){
                if( ms.find(s[is]) != ms.end()){
                    if( ms[s[is]] != a[idx]){
                        y = false;
                        break;
                    }
                }else{
                    if(as.count(a[idx]) != 0){
                        y = false;
                        break;
                    }
                    ms[s[is]] = a[idx];
                    as.insert(a[idx]);
                }
                idx++;
            }
            cout << (y? "YES":"NO") << '\n';
        }
    }
    return 0;
}