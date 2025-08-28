#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int l, x, y,a; cin >> l;
    unordered_set<int> s;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> a;
        s.insert(a);
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> a;
        s.insert(a);
    }
    cout << (s.size() == l ? "I become the guy." : "Oh, my keyboard!") << '\n';
    return 0;
}