#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int q; cin >> q;
    while(q--){
        ll a, b, n, s; cin >> a >> b >> n >> s;
        if( s%n <= b && (a*n + b) >= s){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout <<'\n';
    }
    return 0;
}