#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll a, b, d; cin >> a >> b >> d;
    ll doz = (a * b) / 12 + ( (a * b) % 12 ? 1 : 0);
    cout << doz * d <<  '\n';
}