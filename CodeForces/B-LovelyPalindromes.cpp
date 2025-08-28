#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s; cin >> s;
    cout << s;
    cout << string(s.rbegin(), s.rend());
    cout << '\n';
    return 0;
}