#include <iostream>
using namespace std;
int main(){
    int t, n, o; cin >> t;
    string s;
    while(t--){
        cin >> n >> s;
        o = 0;
        for (size_t i = 0; i < n; i++){
            if (s[i] == '(')
            {
                o++;
                continue;
            }

            if (o > 0)
            {
                o--;
            }
            
        }
        cout << o << '\n';
    }
    return 0;
}