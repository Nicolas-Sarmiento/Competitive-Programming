#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if( n < 2){
            cout << -1 << '\n';
            continue;
        }
        if(n == 2){
            cout << 66 << '\n';
            continue;
        }
        string r;
        ll cnt = 3+6+6;
        for(int i = 0; i < (n-3);i++){
            if(i == (n-4) && n%2){
                r.push_back('6');
                cnt += 6;
                continue;
            }
            r.push_back('3');
            cnt += 3;
        }
        r += "366";
        if( !(cnt %3) && !(cnt%6)){
            cout << r << '\n';
        }else{
            cout << -1 << '\n';
        }
    }
    return 0;
}