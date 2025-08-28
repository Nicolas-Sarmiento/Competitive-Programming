#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        cout << s.substr(0, s.size()-2) << "i\n";
    }
    return 0;
}