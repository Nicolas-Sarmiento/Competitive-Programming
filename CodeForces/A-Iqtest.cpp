#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(int &i: v) cin >> i;
    int ie, io, ne=0,no=0;
    for(int i = 0; i < n; i++){
        if(v[i] %2 ==0){
            ie= i;
            ne++;
        }else{
            io = i;
            no++;
        }
    }
    if(ne == 1){
        cout << ie+1 << '\n';
    }else{
        cout << io+1 << '\n';
    }
    return 0;
}