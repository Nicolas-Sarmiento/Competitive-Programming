#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    string str = "codeforces";
    while (t--){
        char c; cin >> c;
        cout << ( str.find(c) != string::npos ? "YES" : "NO" ) << '\n';
    }
    return 0;
}
