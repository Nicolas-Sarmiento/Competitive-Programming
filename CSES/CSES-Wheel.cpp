#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, x; cin >> n >> x;
    vector<ll> v (n);
    for(ll &i: v) cin >> i;
    sort(v.begin(), v.end());
    ll i = 0, j = n-1, ans = 0;
    while (i <= j){
        if (v[i] + v[j] <= x){i++;j--;}
        else j--;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}