#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, ai; cin >> n;
        int odds = 0;
        for (int i = 0; i < n; i++){
            cin >> ai;
            odds += ai % 2;
        }
        cout << (odds % 2 ? "NO": "YES") << '\n';
    }
    return 0;
}
