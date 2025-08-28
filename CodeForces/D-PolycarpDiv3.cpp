#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s; cin >> s;
    ll a = 0, b=0, n=0, cnt = 0;
    for(auto &i : s){
        n = i - '0';
        if( !(n%3) || !((n + a) % 3) || !( (n + a + b) % 3)){
            cnt++; 
            a = b = 0;
        }else{
            b = a;
            a = n;
        }
    }
    cout << cnt << '\n';
    return 0;
}