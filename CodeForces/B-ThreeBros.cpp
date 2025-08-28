#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b; cin >> a >> b;
    set<int> s;
    s.emplace(1);s.emplace(2);s.emplace(3);
    s.erase(a);s.erase(b);
    cout << *s.begin() << '\n';
    return 0;
}