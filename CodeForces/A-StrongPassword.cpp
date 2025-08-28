#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s, ans = ""; cin >> s;
        bool st = true;
        for(int i = 0; i < s.length()-1; i++){
            ans += s[i];
            if(s[i] == s[i+1] && st ){
                ans += (s[i] == 'w'? 'z': 'w');
                st = false;
            }
        }
        ans += s[s.length()-1];
        if(st){
            ans += (s[s.length()-1] == 'w'? 'z': 'w');
        }
        cout << ans << '\n';
    }

    return 0;
}