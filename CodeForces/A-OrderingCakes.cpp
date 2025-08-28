#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, fi; cin >> n >> m;
    int f[m];
    memset(f,0,sizeof(f));
    while(n--){
        cin >> fi;
        f[fi-1]++;
    }
    for(auto &i: f){
        cout << (i/12) + (i%12?1:0) << '\n';
    }

    return 0;
}