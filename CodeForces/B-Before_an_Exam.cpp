#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, sum; cin >> d >> sum;
    vector<pair<int,int>> sch (d); // min, max
    int mn = 0, mx = 0;
    for ( auto &i : sch ){
        cin >> i.first >> i.second;
        mn += i.first;
        mx += i.second;
    }
    
    if ( sum > mx || sum < mn ) {
        cout << "NO\n";
        return 0;
    }
    
    vector<int> ans (d,0);
    for ( int i = 0; i < d; i++ ) {
        sum -= sch[i].first;
        ans[i] = sch[i].first;
    }
    
    
    for ( int i = 0; i < d; i++ ) {
        int s = min( sum, sch[i].second - sch[i].first );
        ans[i] += s;
        sum -= s;
    }
    
    cout << "YES\n";
    for ( int i : ans ) cout << i << ' ';
    cout << '\n';
    
    return 0;
}
