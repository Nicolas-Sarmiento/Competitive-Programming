#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    ll x, y, a, b, r1,r2,r3;
    while(t--){
        cin >> x >> y >> a >> b;
        r1 = a * (x+y);
        r2 = b* max(x,y) + (a * (max(x,y) - min(x,y)));
        r3 = b * min(x,y) + (a * (max(x,y) - min(x,y)));
        cout << min(r1, min(r2,r3)) << '\n';
    }

    return 0;
}