#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    string nms[] = {"Sheldon","Leonard","Penny","Rajesh", "Howard"};
    ll lst = 0, t= 0, pw = 0;
    while( t < n) {
        lst = t;
        t += 5 * (1ll << pw);
        pw++;
    }
    n -= lst;
    ll ix = (n-1)/(1ll << (pw-1));

    cout<< nms[ix]<< '\n';
    return 0;
}