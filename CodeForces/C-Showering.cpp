#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int l = 0, r, n, s, m;
        bool is = false;
        cin >> n >> s >> m;
        for(int i = 0; i < n;i++){
            cin >> r;
            is = is  || (r - l) >= s;
            cin >> l; 
        }
        is = is  || (m - l) >= s;
        cout << (is? "YES":"NO") <<'\n';
    }
    return 0;
}