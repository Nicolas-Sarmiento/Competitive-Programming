#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, vi; cin >> n;
    vector<int> v (n + 7);
    for ( int i = 1; i <= n; i++ ) {
        cin >> vi;
        v[vi] = i;
    }
    
    int m; cin >> m;
    ll v_score = 0, p_score = 0;
    while ( m-- ) {
        int bi; cin >> bi;
        v_score += v[bi];
        p_score += n + 1 - v[bi];
    }
    cout << v_score << ' ' << p_score << '\n';
    
    return 0;
}
