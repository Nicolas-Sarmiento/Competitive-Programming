#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n; 
    vector<int> v (n), v2 (n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v2[i] = v[i];
    }
    int l = -1, r = -1;
    for(int i = 0; i < n-1;i++){
        if( v[i] > v[i+1]) l = l == -1? i : l;
        else{
            if( l == -1) continue;
            r = r == -1 ? i : r;
        }
    }
    if( l == -1 ){
        cout << "yes\n1 1\n";
        return 0;
    }
    if( r == -1){ r = n-1;}
    sort(v2.begin(), v2.end());
    bool c = true;
    reverse(v.begin()+l, v.begin()+r+1);
    for(int i = 0; i < n;i++){
        if( v[i] != v2[i]) c = false;
    }
    if(c){
        cout << "yes\n"<<l+1 << ' ' << r+1 <<'\n';
    }else{
        cout << "no\n";
    }
    return 0;
}