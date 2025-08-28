#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt, x, n,rd; cin >> tt;
    while(tt--){
        cin >> n >> x;
        vector<int> v (n); for(auto &i: v) cin >> i;
        int od = 0, ev;
        for(auto i : v){
            if(i % 2) od++;
        }
        if( od == 0 ){
            cout << "No\n";
            continue;
        }
        bool r = 0;
        ev = n - od;
        od = od%2 ? od : od-1;
        rd = x - od;
        if( rd > 0){
            r = ev >= rd;
        }else{
            if( !(x%2)){
                r = ev >= 1;
            }else{
                r = 1;
            }   
        }
        cout << (r?"Yes":"No") << '\n';
    }
    return 0;
}