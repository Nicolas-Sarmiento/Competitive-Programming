#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, c, r, k; cin >> t;
    while(t--){
        cin >> c >> r >> k;
        cout << min(k,r) * min(k,c) << '\n';
    }
    return 0;
}