#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t; 
    string s; 
    char c;
    while(t--){
        s.clear();
        for(int i = 0; i < 3; i++){
            cin >> c;
            s.push_back(tolower(c));
        }
        cout << (s == "yes" ? "YES": "NO") << '\n';
    }
    return 0;
}