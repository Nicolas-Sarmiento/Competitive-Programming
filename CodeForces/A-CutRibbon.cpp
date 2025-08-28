#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a,b,c;
    int ct [4005];
    for(auto &i : ct) i = -1;
    ct[0] = 0;
    cin >> n >> a >> b >> c;
    int rb[] = {a,b,c};
    for(int i = 1; i < 4006; i++){
        for(int j = 0; j < 3; j++){
            if( (i - rb[j] ) < 0) continue;
            if( ct[i - rb[j]] == -1) continue;
            ct[i] = max( ct[i], ct[i - rb[j]] + 1);
        }
    }
    cout << ct[n] << '\n';
    return 0;
}