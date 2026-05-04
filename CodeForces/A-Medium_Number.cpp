#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        vector<int> v (3);
        for ( int& i : v ) cin >> i;
        sort(v.begin(), v.end());
        cout << v[1] << '\n';
    }
    return 0;
}
