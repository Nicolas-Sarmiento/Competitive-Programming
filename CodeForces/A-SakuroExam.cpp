#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, a, b; cin >> t;
    while(t--){
        cin >> a >> b;
        if(a%2 != 0){
            cout << "NO\n";
            continue;
        }
        if(b%2 == 0){
            cout << "YES\n";
        }else{
            cout << (a==0? "NO": "YES") << '\n';
        }
    }
    return 0;
}