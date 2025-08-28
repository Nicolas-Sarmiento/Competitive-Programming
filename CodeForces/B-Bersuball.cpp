#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int b[105]; int g[105]; memset(b, 0, sizeof(b)); memset(g, 0, sizeof(g));
    int n, m, a; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        b[a]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> a;
        g[a]++;  
    } 
    int p = 0;
    for(int i = 1; i <= 100; i++){
        for(int j = -1; j <= 1; j++){
            if( b[i] == 0) break;
            if( g[i+j] > 0){
                if( b[i] >= g[i+j] ){
                    p += g[i+j];
                    b[i] -= g[i+j];
                    g[i+j] = 0;
                }else{
                    p+= b[i];
                    g[i+j]-= b[i];
                    b[i] = 0;
                }
            }
        }
    }
    cout << p << '\n';
    return 0;
}