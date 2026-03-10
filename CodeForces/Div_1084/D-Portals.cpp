#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while ( t-- ) {
        int n, x, y; cin >> n >> x >> y;
        vector<int> p (n);
        for ( int &i : p ) cin >> i;
        vector<int> inner, outter;
        for ( int i = 0; i < n; i++ ) {
            if ( i < x || i >= y ) outter.push_back( p[i] );
            else inner.push_back( p[i] ); 
        }

        
        if ( inner.size() > 0 ) {
            
            vector<int> inner_better;
            int less_inner = inner[0];
            int less_i = 0;
            for ( int i = 1; i < (int) inner.size(); i++ ) {
                if ( less_inner > inner[i] ) {
                    less_inner = inner[i];
                    less_i = i;
                }
            }
            
            inner_better.push_back( inner[less_i] );
            for ( int i = (less_i + 1 ) % (int) inner.size() ; i != less_i ; i = ( i + 1 ) % (int) inner.size() ){
                inner_better.push_back( inner[i] );
            }
            
            if ( outter.size() > 0 ) {
                bool inner_print = false;
                for ( int i = 0; i < (int) outter.size(); i++ ) {
                    if ( inner_better[0] < outter[i]  && !inner_print ){
                        
                        for ( int j : inner_better ) cout << j << ' ';
                        inner_print = true;
                        
                    }  
                    cout << outter[i] << ' ';
                }
                if ( !inner_print) for ( int j : inner_better ) cout << j << ' ';
            }else {
                for ( int i : inner_better ) cout << i << ' ';
            }
        } else {
            for ( int i : outter ) cout << i << ' ';
        }
        cout << '\n';
        
    }
    return 0;
}
