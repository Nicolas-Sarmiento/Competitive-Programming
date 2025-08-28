#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, t; cin >> n >> t;
    if( n == 1 && t == 10){
        cout << -1 << '\n';
        return 0;
    }
    int c = t!= 10? t:t%10;
    if (t == 10){
        cout << 1;
        n--;
    }
    for(int i = 0; i < n; i++){
        cout << c;
    }
    cout << '\n';
    return 0;
}