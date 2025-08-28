#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll s[200008];
ll cnt[200008];

ll S(ll n){
    if( n == 0){
        s[0] = 0;
    }
    else if( n == 1){
        s[1] = cnt[1]; 
    }
    else{
        if( s[n] != -1){
            return s[n];
        }else{
            s[n] = max( S(n-1), S(n-2) + cnt[n] * n);
        }
    }
    return s[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(auto &i: s) i = -1;
    for(auto &i: cnt) i = 0;
    ll n; cin >> n;
    ll a, mx = 0;
    for(ll i = 0; i < n;i++){
        cin >> a;
        cnt[a]++;
        mx = max(n, a);
    }

    cout <<S(mx)<< '\n';
    return 0;
}