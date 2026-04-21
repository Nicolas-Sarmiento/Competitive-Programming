#include <bits/stdc++.h>

using namespace std;

int extract_time() {
    int h, m, s;
    char c;
    cin >> h >> c >> m >> c >> s;
    return ( h * 3600 ) + ( m * 60 ) + s;
}

int main(){
    int n, m; cin >> n >> m;
    vector<int> arrivals (n), departures (m);
    for ( int i = 0; i < n; i++ ) {
        arrivals[i] = extract_time(); 
    }
    for ( int i = 0; i < m; i++ ) {
        departures[i] = extract_time(); 
    }
    
    int ans = 5000, limit;
    cin >> limit;
    
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            if ( departures[j] < arrivals[i] )  continue;
            int diff = 0;
            diff = departures[j] - arrivals[i];           
            if ( diff >= limit ) ans = min(ans, diff);
        }
    }
    cout << (ans == 5000 ? -1 : ans ) << '\n';
    return 0;
}
