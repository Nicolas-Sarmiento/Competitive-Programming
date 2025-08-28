#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, t; cin >> n >> t;
    vector<int> v(n-1);
    for(auto &a: v) cin >> a;
    int i = 0;
    bool can = false;
    while (i < (n-1)){
        if( (i+1) == t) can = true;
        i+= v[i];
    }
    if( (i+1) == t) can = true;
    cout << (can? "YES":"NO") << '\n';
    return 0;
}