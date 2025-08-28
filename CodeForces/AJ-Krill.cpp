#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll l, r,x,y,k, a;
    bool w = false;
    cin >> l >> r >> x >> y >> k;
    for(int i = x; i <=y;i++){
        a = k*i;
        if ( a >= l && a <= r){
            w = true;
            cout << "YES\n";
            break;
        }
    }
    if (!w){
        cout << "NO\n";
    }
    return 0;
}