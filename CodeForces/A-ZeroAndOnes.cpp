#include <iostream>
using namespace std;
int main(){
    int t, o=0, z=0; cin >> t;
    string s; cin >> s;
    for (int i = 0; i < t; i++){
        if (s[i] == '0') o++;
        else z++;
    }
    cout << o + z - (2*min(o,z));
    return 0;
}