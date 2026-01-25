#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector <int> p ( n );
        map<int, int> index;
        for ( int i = 0; i < n; i++ ) {
            cin >> p[i];
            index[p[i]] = i;
        }
        int last = n, first = 0;
        
        for ( ; first < n; first++ ){
            if ( p[first] < last ) break;
            last--;
        }
        
        if ( first < index[last] + 1 ) reverse( p.begin() + first, p.begin() + index[last] + 1 );
        for ( int i : p ) cout << i << ' ';
        cout << '\n';
        
    }
    return 0;
}
