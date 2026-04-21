#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    while ( t-- ) {
        int n; cin >> n;
        vector<pair<int,int>> v (n);
        for ( auto &i : v ) cin >> i.first >> i.second;
        int best = -1;
        for ( int i = 0;  i < n; i++ ) {
            if ( v[i].first > 10 ) continue;
            if ( best == -1 ) { best = i; continue; }
            if ( v[i].second > v[best].second ) best = i;
        }
        cout << best + 1 << '\n';
    }
    return 0;
}
