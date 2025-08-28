#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n);
    unordered_map<ll, ll> m;
    for( auto &i: v){
        cin >> i;  
        m[i]++;
    } 
    sort(v.begin(), v.end());
    ll diff = v.back() - v.front();
    ll wy = 0;
    if( diff == 0 ){
        wy = (n * (n-1))/2;
    
    }else{
        wy = m[v.front()] * m[v.back()];
    }
    cout << diff << ' ' << wy << '\n';
    return 0;
}