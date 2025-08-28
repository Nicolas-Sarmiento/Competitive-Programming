#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s;
        s.push_back('1');
        for(int i = 1; i < n; i++){
            s.push_back('0');
        }
        cout << s <<'\n';
    }
    return 0;
}