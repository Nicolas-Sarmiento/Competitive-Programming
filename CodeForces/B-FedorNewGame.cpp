#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    vector<int> v (m+1);
    for(auto &i : v) cin >> i;
    int f = v.back();
    int fr = 0;
    // int b = 1;
    // for(int i = 0; i < v.size()-1; i++){
    //     int cnt = 0;
    //     for(int p = 0; p < n; p++){
    //         cnt += (v[i] & (b << p)) != (f & (b << p)) ? 1 : 0;
    //     }
    //     fr += cnt <= k ? 1 : 0;
    // }
    for( int i = 0; i < v.size()-1; i++){
        fr += __popcount(v[i] ^ f) <= k ? 1: 0;
    }
    cout << fr << '\n';
    return 0;
}