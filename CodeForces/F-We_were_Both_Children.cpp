#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> freq (n+5);
        map<int, int> mp;
        int a;
        for ( int i = 0; i < n; i++){
            cin >> a;
            if ( a <= n ) freq[a]++;
        }
        
        for ( int i = 1; i <= n; i++ ) {
            for ( int j = 1; j *j <= i; j++ ) {
                if ( i % j ) continue;
                mp[i] += freq[j];
                if ( i / j !=  j ) mp[i] += freq[i/j];
            }
        }
        
        int ans = 0;
        for ( int i = 1; i <= n ; i++ ) ans = max( ans, mp[i] );
        
        cout << ans << '\n';
        
    }
    return 0;
}
