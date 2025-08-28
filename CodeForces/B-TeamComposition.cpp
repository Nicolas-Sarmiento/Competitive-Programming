#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >>t;
    ll a, b;
    while(t--){
        cin >> a >> b;
        cout << min(min(a,b), (a+b)/4) << '\n';
    }
    return 0;
}