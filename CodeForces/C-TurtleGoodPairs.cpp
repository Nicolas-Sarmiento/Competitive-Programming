#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n; cin >> t;
    char c;
    while(t--){
        unordered_map<char, int> m;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> c;
            if( m.find(c) != m.end()){
                m[c]++;
            }else{
                m[c] = 1;
            }
        }

        while (m.size() > 0){
            stack<char> s;
            for(auto it = m.begin(); it != m.end(); it++){
                cout << it->first;
                m[it->first]--;
                if(m[it->first] == 0){
                    s.push(it->first);
                }
            }
            while (s.size()>0){
                m.erase(s.top());
                s.pop();
            }
            
        }
        cout << '\n';
    }
    return 0;
}