#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll bopen = 0, sopen = 0, cnt = 0;
        for(auto &i : s){
            if( i == '(') bopen++;
            else if ( i == '[') sopen++;
            else if ( i == ')' && bopen > 0) {bopen--; cnt++;}
            else if ( i == ']' && sopen > 0) {sopen--; cnt++;} 
        }
        cout << cnt << '\n';

    }
    return 0;
}