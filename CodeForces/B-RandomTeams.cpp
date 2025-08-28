#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    ll mx = ((n-m+1)*(n-m))/2;
    ll mn = 0;
    ll bs, sm , lg;
    bs = n/m;
    lg = n%m;
    sm = m - lg;
    mn = (sm * ((bs * (bs-1))/2)) + (lg * (((bs+1)*bs)/2));
    cout << mn << ' ' << mx << '\n';
    return 0;
}