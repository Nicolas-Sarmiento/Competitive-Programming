#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    ll h, n, m;
    while(t--){
        cin >> h >> n >> m;
        while(h > 20 && n--){
            h = (h/2)+10;
        }
        cout << (h <= (10*m)? "YES":"NO") <<'\n';

    return 0;
}