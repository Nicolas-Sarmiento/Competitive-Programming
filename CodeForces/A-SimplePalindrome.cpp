#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n; cin >> t;
    char v[] = {'a','e','i','o','u'};
    while(t--){
        cin >> n;
        int i = 0;
        string s;
        while(n--){
            s.push_back(v[i]);
            i = (i+1) % 5;
        }
        sort(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}