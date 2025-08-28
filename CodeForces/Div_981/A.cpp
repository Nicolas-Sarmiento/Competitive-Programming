#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt; cin >> tt;
    int n, t, nt;
    while(tt--){
        cin >> n;
        cout << (n%2 == 0? "Sakurako" :"Kosuke") << '\n';
    }
    return 0;
}