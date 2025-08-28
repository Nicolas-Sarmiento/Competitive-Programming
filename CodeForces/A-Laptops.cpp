#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(auto &i: v){
        cin >> i.first;
        cin >> i.second;
    }
    sort(v.begin(),v.end());
    pair<int,int> last = v[0];
    bool c = false;
    for(int i = 1; i < n; i++){
        if( last.first < v[i].first && last.second > v[i].second){
            c = true;
            break;
        }
        last = v[i];
    }
    cout << (c? "Happy Alex":"Poor Alex") << '\n';
    return 0;
}