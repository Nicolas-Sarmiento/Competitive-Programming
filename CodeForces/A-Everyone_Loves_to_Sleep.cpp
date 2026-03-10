#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, h, m, hi, mi; cin >> n >> h >> m;
        vector<int> a (n);
        for ( int i = 0; i < n; i++ ) { 
            cin >> hi >> mi;
            a[i] = (hi * 60 ) + mi; 
        }
        
        sort(a.begin(), a.end());
        
        int time = ( h * 60 ) + m;
        auto it = lower_bound(a.begin(), a.end(), time);
        int h_ans = 0, m_ans = 0;
        if (  it != a.end() ) {
            h_ans = (abs(time - *it)) / 60;
            m_ans = (abs(time - *it)) % 60;
        }else {
            h_ans = (( 1440 - time )  + a[0] ) / 60;
            m_ans = (( 1440 - time )  + a[0] ) % 60;
        }
        
        cout << h_ans << ' ' << m_ans << '\n';

        
    }
    return 0;
}
