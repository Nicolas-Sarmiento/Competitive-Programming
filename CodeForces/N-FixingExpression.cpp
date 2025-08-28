#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a;
        char s; cin >> s;
        cin >> b;
        if( a > b){
            s = '>';
        }else if ( a < b){
            s = '<';
        }else{
            s = '=';
        }
        cout << a << s << b << '\n';
    }
    return 0;
}