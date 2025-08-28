#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n,a; cin >> n;
    map<ll,int> m;
    while(n--){
        cin >> a;
        m[a] = 1;
    }
    
    cout << m.size() << '\n';
    return 0;
}