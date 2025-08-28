#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n, c; cin >> t;
    string m;
    while(t--){
        cin >> n >> m;
        c = (int) sqrt(n);
        if( c*c != n){
            cout << "No\n";
            continue;
        }
        int n_zero = 0;
        for(int i = 0; i < n; i++){
            if(m[i] == '0') n_zero++;
        }
        cout << (n_zero == ((c-2)*(c-2)) ? "Yes":"No") << '\n';
    }
    return 0;
}