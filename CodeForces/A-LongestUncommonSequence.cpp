#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string a, b; cin >> a >> b;
    if( a.compare(b) == 0){
        cout << "-1\n";
    }else{
        cout << max(a.size(), b.size())<<'\n';
    }
    return 0;
}