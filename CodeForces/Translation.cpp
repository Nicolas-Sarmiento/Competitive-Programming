
#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int sIndex = 0 , tIndex = t.length();
    while (tIndex--){
        if (t[tIndex] != s[sIndex]){
            cout << "NO\n";
            return 0;
        }
        
        sIndex++;
    }
    cout << "YES\n";
    return 0;
}