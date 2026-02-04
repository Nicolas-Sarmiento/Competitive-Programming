#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a (n);
        for( int &i : a ) cin >> i;
        sort( a.rbegin(), a.rend() );
        for ( int i : a ) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
