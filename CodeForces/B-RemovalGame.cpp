#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n ; cin >> t; 
    while(t--){
        cin >> n;
        int a[n];
        int b[n];
        for(auto &i: a) cin >> i;
        for(auto &i: b) cin >> i;
        bool w1 = true, w2 = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]) w1 = false;
        }
        for (int i = 0; i < n; i++){
            if(a[i] != b[n-1-i]) w2 = false;
        }
        
        cout << (w1 || w2? "Bob" :  "Alice") << '\n';
    
    }
    return 0;
}