#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n,a, f; cin >> t;
    while(t--){
        cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(i == 0){
                f = a;
            }
            m[a] = i;
        }
        
        bool c = true;
        bool ml, mr;
        int l= -1, r = -1;
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->first == f){
                continue;
            }
            if( m.find(it->first+1)!= m.end()){
                r = m[it->first+1];
            }else{
                r = -1;
            }

            if( m.find(it->first-1)!= m.end()){
                l = m[it->first-1];
            }else{
                l = -1;
            }

            
            ml = l > -1 && it->second > l;
            mr = r > -1 && it->second > r;
            if( !ml && !mr){
                c = false;
                break;
            }
        }
        cout << (c? "YES":"NO") << '\n';
    }
    return 0;
}