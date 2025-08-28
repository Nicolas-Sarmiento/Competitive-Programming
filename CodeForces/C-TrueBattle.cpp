#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool p = false;
        for(int i = 1; i < n-1; i++){
            if(s[i] == '0') continue;
            if(s[i+1] == '1') p = true;
        }
        p = p | s[0] == '1' | s[n-1] == '1';
        cout << (p? "Yes":"No") << '\n';
    }
    return 0;
}