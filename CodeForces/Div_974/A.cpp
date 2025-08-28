#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k, g = 0, a, cnt = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a;
            if( a >= k ) g += a;
    	    if( a == 0 && g > 0){ g--; cnt++;}
        } 
        cout << cnt <<'\n';
    }



    return 0;
}