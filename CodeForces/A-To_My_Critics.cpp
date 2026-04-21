#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ){
        int a, b, c; cin >> a >> b >> c;
        int v[3] = { a, b, c };
        sort(v, v + 3);
        cout << (v[2] + v[1] >= 10 ? "YES": "NO") << '\n';    
        
    }
    return 0;
}
