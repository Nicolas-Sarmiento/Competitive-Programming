#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int t, n, m, aux; cin >> t;
    string s, c;
    while(t--){
        cin >> n >> m;
        cin >> s;
        set<int> q;
        for (size_t i = 0; i < m; i++){
            cin >> aux;
            q.insert(aux);
        }
        cin >> c;
    
        sort(c.begin(),c.end());

        int ci = 0;
        for(int i : q){
            s[i-1] = c[ci];
            ci++;
        }
        cout << s << '\n';
    }
    return 0;
}