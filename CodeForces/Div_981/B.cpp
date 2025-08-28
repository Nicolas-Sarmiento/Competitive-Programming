#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt; cin >> tt;
    
    while(tt--){
        int n; cin >> n;
        vector<vector<ll>> m (n, vector<ll> (n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> m[i][j];
            }
        }
        ll sm = 0;
        ll mx = 0;
        int x,y;
        for(int i = n-1; i >= 0; i--){
            x = i;
            y = 0;
            mx = 0;
            while( x < n && y < n){
                mx = min(m[x][y], mx);
                x++;
                y++;
            }
            sm += abs(mx);
        }
        for(int i = 1; i < n; i++){
            x = 0;
            y = i;
            mx = 0;
            while( x < n && y < n){
                mx = min(m[x][y], mx);
                x++;
                y++;
            }
            sm += abs(mx);
        }
        cout << sm <<'\n';
    }
    return 0;
}