#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        string s; cin >>s;
        ll w = 0;
        ll l = 0, mn = n;
        for( ll r = 0; r < s.length(); r++){
            w += s[r] == 'W' ?  1 : 0;
            if((r-l+1) < k){
                continue;
            }

            mn = min(mn,w);
            w -= s[l] == 'W' ?  1 : 0;
            l++;

        }
        cout << mn << '\n';
    }
    return 0;
}