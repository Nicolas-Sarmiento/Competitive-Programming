#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<int> a (n+5, 0);
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    int cnt = 0;
    for ( int i = 1; i <= n; i++ ) {
        if ( a[i] == 0 ) { cnt++; continue; }
        if ( a[i] == 1  || a[i] == 2 ) { 
            if ( a[i] == a[i-1] ) { cnt++; a[i] = 0; } 
            continue; 
        }
        
        int last_index = i;
        while ( a[i] == 3 ) i++;
        
        if ( a[last_index] == 0 || a[i] == 0 ) continue;
        
        if ( ( a[last_index] == a[i] ) && !( (i - last_index) % 2 ) ) cnt++;
        if ( ( a[last_index] != a[i] ) &&  ( (i - last_index) % 2 ) ) cnt++;
        
        
        
    }
    cout << cnt << '\n';
}
