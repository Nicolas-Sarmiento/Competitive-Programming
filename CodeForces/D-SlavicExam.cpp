#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s, t; cin >> s >> t;
        int tpos = 0;
        for(int i = 0; i < s.length();i++){
            if (tpos < t.length()){
                if ( s[i] == '?'){
                    s[i] = t[tpos];
                }
                if (s[i] == t[tpos]) tpos++;
            }else{
                if ( s[i] == '?'){
                    s[i] = 'a';
                }   
            }
        }
        if(tpos == t.length()){
            cout << "YES" << '\n';
            cout << s << '\n';
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}