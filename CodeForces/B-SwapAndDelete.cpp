#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll o = 0, z = 0;
        for( auto &i : s){
            o += i == '1';
            z += i == '0';
        }
        ll l = 0;
        for(auto &i : s){
            if( i == '0' && o > 0){ o--; l++;}
            else if( i == '1' && z > 0) { z--; l++;}
            else break;
        }
        cout << s.size() - l << '\n';
    }
    return 0;
}