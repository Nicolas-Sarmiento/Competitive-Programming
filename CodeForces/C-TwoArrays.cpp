#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t, n; cin >> t;
    bool once;
    while(t--){
        cin >> n;
        int a[n];
        int b[n];
        for (size_t i = 0; i < n; i++){
            cin >> a[i];
        }
        for (size_t i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        once = true;
        for (size_t i = 0; i < n; i++){
            if( a[i] != b[i] && (a[i]+1) != b[i]){
                once = false;
                break;
            }
        }
        cout << (once? "YES":"NO") << '\n';
    }
    return 0;
}