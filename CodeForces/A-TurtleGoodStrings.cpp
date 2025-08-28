#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt, n; cin >> tt;
    string s;
    while(tt--){
        cin >> n >> s;
        cout << (s[0] != s[s.length()-1]? "YES":"NO") << '\n';
    }
    return 0;
}