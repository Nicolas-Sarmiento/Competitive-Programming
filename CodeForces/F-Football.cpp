#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b, d; cin >> n >> a >> b;

    if( n == 1){
        cout << (a==b? 1:0) << '\n';
        cout << a << ':' << b << '\n';
        return 0;
    }
    d = (a+b) < n? n - (a+b): 0;
    cout << d << '\n';
    vector<pair<int, int>> v(n);
    int m = 1;
    while( a > 0 && m <= n){
        a--;
        v[m-1] = {1,0};
        m++;
    }
    if( a > 0 ) v[0] = {1+a, 0};
    if( b > 0){
        if( m == n+1){
            v[0].first++;
            v[n-1].first--;
            v[n-1].second = b;
        }else{
            while ( b > 0 && m <= n){
                b--;
                v[m-1] = {0,1};
                m++;
            }
            if( b > 0) v[n-1] = {0, 1+b};
        }
    }
    for(auto &i: v){
        cout << i.first << ':' << i.second << '\n';
    }
    return 0;
}