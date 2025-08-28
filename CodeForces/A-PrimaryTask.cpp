#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt;
    string n;
    while(tt--){
        cin >> n;
        bool flag = false;
        if( n.length() >= 3){
            char s1 = n[0];
            char s2 = n[1];
            if ( s1 == '1' && s2 == '0'){
                string sn = n.substr(2);
                int e = stoi(sn);
                if( n.length() == 3){
                    flag = e >= 2;
                }else if( n.length() == 4){
                    flag = e >= 10;
                }else{
                    flag = e>=100;
                }
            }
        }
        cout << (flag? "YES":"NO") << '\n';
    }
}