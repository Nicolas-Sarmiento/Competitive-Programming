#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    unordered_map<string, int> m;
    string q;
    for(int i = 0; i < n; i++){
        cin >> q;
        if(m.find(q) != m.end()){
            cout << q << m[q] << '\n';
        }else{
            m[q] = 0;
            cout << "OK" << '\n';
        }
        m[q]++;
    }
    return 0;
}