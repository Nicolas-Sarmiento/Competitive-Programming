#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s; bool b = false;
        for(ll i = 0; i < s.size()-1; i++){
            if( s[i] == s[i+1]){
                b = true;
                break;
            }
        }
        cout << (b? 1: s.size()) << '\n';
        
    }
    return 0;
}