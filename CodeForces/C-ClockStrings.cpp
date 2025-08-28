#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll a, b, c , d; cin >> a >> b >> c >> d;
        ll cnt = 0;
        if( min(a,b) < c && c  < max(a,b))cnt++;
        if( min(a,b) < d  && d < max(a,b))cnt++;

        cout << (cnt%2? "YES":"NO") << '\n';
    }
    return 0;
}