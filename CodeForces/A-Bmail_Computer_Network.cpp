#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> adj (n+1, 0);
    for ( int i = 2; i <= n; i++ ) cin >> adj[i];
    vector<int> ans;
    
    int i = n;
    while ( i != 0 ) {
        ans.push_back(i);
        i = adj[i];
    }
    
    for ( i = (int) ans.size() - 1; i >= 0; i-- ) cout << ans[i] << ' ';
    cout << '\n'; 
    
    
    return 0;
}
