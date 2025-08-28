
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, r;
    int t, h, i;
    cin >> t;
    while(t--){
        cin >> s ;
        r = "";
        h = stoi(s.substr(0,2));
        i = h;    
        if ( h > 12  || h == 0){
            h = abs(h - 12);
        }

        r += h < 10 ? "0" + to_string(h) : to_string(h);
        r += s.substr(2) + (i < 12? " AM":" PM");
        cout << r << '\n';
    }
    
    return 0;
}