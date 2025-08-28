#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    string a, b;
    while(t--){
        cin >> a >> b;
        int n = a.length(), m = b.length();
        int ans = n+m;
        for(int i = 0; i < m; i++){
            int j = i;
            for(auto c : a){
                if (j < m && c == b[j]) j++;
            }
            ans = min(ans, n+m - (j-i));
        }
        cout << ans << '\n';
    }
    return 0;
}