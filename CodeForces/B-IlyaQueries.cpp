#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s; cin >> s;
    int n = s.length();
    vector<ll> v(n);
    v[n-1] = 0;
    for(int i = n-2; i >= 0; i--){
        v[i] = v[i+1];
        if( s[i] == s[i+1]) v[i]++;
    }
    int m; cin >> m;
    while(m--){
        int l, r; cin >> l >> r;
        cout << abs(v[r-1] - v[l-1]) <<'\n';
    }
    return 0;
}