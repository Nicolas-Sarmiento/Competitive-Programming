#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a (n);
    for ( int &i : a ) cin >> i;
    
    int i = 0;
    int limit = (1 << (n+1) ) - 1;
    bool ans = false;
    
    while ( i <= limit ) {
        int sum = 0;
        for ( int j = 0; j < n; j++ ) {
            if ( (i & ( 1<< j)) ) sum += a[j];
            else sum -= a[j];
        }
        if ( sum % 360 == 0 ) ans = true;
        i++;
    } 
    cout << ( ans ? "YES" : "NO" ) << '\n';
    
    return 0;
}
