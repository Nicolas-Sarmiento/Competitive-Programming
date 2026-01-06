#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
    
void solve(){
    int n; cin >> n;
    int b_size = ( n * (n-1) )/ 2;
    vector<int> b (b_size);
    for ( int &i : b ) cin >> i;
    sort( b.begin(), b.end());
    
    int i = 0;
    for (int j = 1; j < n; j++ ){
        cout << b[i] << ' ';
        i += n - j;
    }
    cout << 1000000000 << '\n';
    
}    

int main(){
    
    int t; cin >> t;
    while (t--){
        solve();
    }
}
