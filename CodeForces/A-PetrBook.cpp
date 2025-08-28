#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v(7);
    ll sm = 0;
    ll d = 0;
    for(auto &i: v){ cin >> i; sm += i;}
    while(n > sm){
        n -= sm;
    }
    while( n > 0){
        n -= v[d%7];
        d++;
    }
    cout << d << '\n';
    return 0;
}