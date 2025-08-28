#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        unordered_map<char, ll> m, f;
        for( auto &i : s){ m[i]++;}
        if( m.size() < 3 ){
            cout << 0 << '\n';
            continue;
        }
        
        ll i=0, j, ans = s.length();
        for(j = 0; j < s.length(); j++){
            f[s[j]]++;
            if( f.size() == 3){
                while( f.size() == 3 ){
                    f[s[i]]--;
                    if( f[s[i]] == 0) f.erase(s[i]);
                    i++;
                }
                ans = min(ans, (j - i + 2));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}