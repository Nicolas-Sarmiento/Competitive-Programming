#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n+1);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        ll ans = 0, mn, mx;
        ll in = 100000000000;
        for(int i = 0; i < n; i++){
            ans += abs(a[i]-b[i]);
            mn = min(b[i], a[i]); mx = max(b[i], a[i]);
            if( b[n] <= mx && b[n] >= mn) in = 1;
            else{
                in = min(in, min(abs(b[n]-a[i])+1,abs(b[n]-b[i])+1 ));
            }
        }
        cout << ans + in << '\n';

    }
    return 0;
}