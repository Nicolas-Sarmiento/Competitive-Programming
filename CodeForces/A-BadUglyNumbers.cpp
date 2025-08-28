#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n >= 2){
            string s = string(n-1, '5') + string(1, '4');
            cout << s;
        }else{
            cout << -1;
        }
        cout <<'\n';
    }
    return 0;
}