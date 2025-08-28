#include<bits/stdc++.h>
using namespace std;
const int MAX = 200007; 
int S[MAX];
inline void s(){
    int ls = 1;
    S[0] = 0;
    for(int i = 1; i < MAX; i++ ){
        if(i%10 == 0){
            int n = i;
            ls = 0;
            while(n){
                ls += n%10;
                n /=10;
            }
            
        }
        S[i] = S[i-1] + ls;
        ls++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    s();
    int t, i; cin >> t;
    while (t--){
        cin >> i;
        cout << S[i] << '\n';
    }
    return 0;
}