#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        vector<string> v(8);
        for( auto &i : v) cin >> i;
        bool b = true;
        for( auto &i: v){
            if( i.compare("RRRRRRRR") == 0) b = false;
        }
        cout << (b ? 'B':'R') << '\n';
    }
    return 0;
}