#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    unordered_set<string> st;
    int mid = s.length()/2 + (s.length()%2?1:0);
    for(int i = 1;  i < mid; i++){
        st.emplace(s.substr(i));
    }
    string sh, ans = "";
    for(int i = 0;  i < s.length()-1; i++){
        sh += s[i];
        if(st.count(sh)){
            ans = sh;
            break;
        }
    }
    if(ans.length()){
        cout << "YES\n" << ans << '\n';
    }else{
        cout << "NO\n";
    }
    
    return 0;
}