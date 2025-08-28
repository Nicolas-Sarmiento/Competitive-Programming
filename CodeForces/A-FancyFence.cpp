#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t, a; cin >> t;
    while(t--){
        cin >> a;
        if( a == 180 || a == 0) cout << "NO\n";
        else cout << (360 % (180- a)? "NO": "YES") << '\n';
    }
    return 0;
}