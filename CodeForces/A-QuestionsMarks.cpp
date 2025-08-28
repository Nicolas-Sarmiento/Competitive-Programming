#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    string s;
    int n,a, b, c, d, ans;
    while(t--){
        cin >> n;
        cin >> s;
        a =0; b = 0; c = 0; d = 0;
        ans = 0;
        for(auto &i: s){
            if( i == 'A' && (a < n)){ ans++; a++;}
            else if( i == 'B' && (b < n)){ ans++; b++;}
            else if( i == 'C' && (c < n)) {ans++;c++;}
            else if( i == 'D' && (d < n)) {ans++;d++;}
        }
        cout << ans <<'\n';
    }
    return 0;
}