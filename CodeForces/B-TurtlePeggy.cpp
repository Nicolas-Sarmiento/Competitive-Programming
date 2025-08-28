#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        cout << s[n/2] << '\n';
    }
    return 0;
}