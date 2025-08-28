#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll s; cin >> s;
        
        while(s >= 0){
            if( !(s % 11) ){
                cout << "YES\n";
                break;
            }
            s-= 111;
            if( s < 0 ){
                cout << "NO\n";
            }
        }

    }
    return 0;
}