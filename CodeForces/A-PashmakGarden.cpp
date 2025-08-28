#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll x1,y1,x2,y2,x3,y3,x4,y4; cin >> x1 >> y1 >> x2 >> y2;
    if( x1 == x2){
        x3 = x4 = abs(y1-y2) + x1;
        y3 = y1; y4 = y2;
    }else if( y1 == y2){
        y3 = y4 = abs(x1 - x2) + y1;
        x3 = x1; x4 = x2;
    }else if ( abs(x1-x2) == abs(y1-y2)){
        x3 = x1; y3 = y2;
        x4 = x2; y4 = y1;
    }else{
        cout << "-1\n";
        return 0;
    }
    cout << x3 <<' ' << y3 << ' ' << x4 << ' ' << y4 << '\n';
    return 0;
}