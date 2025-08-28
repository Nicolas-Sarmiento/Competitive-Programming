#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, k ,l ,c, d,p, nl, np; cin >> n >> k >> l >> c >> d >>p>> nl>>np;
    cout << min((k*l)/nl, min(c*d, p/np))/n <<'\n';
    return 0;
}