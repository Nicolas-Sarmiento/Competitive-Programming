#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll t; cin >> t;
    while(t--){
        string s; cin >> s;
        ll n = 0;
        for(auto &i : s){
            if( i == '1') n++;
        }
        cout << n << '\n';
    }
    return 0;
}