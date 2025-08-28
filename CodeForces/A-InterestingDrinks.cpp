#include<bits/stdc++.h>
using namespace std;

int bs(const vector<int> &v, int i){
    int l = 0, r = v.size()-1, mid;
    while (l<= r){
        mid = l + (r-l)/2;
        if(v[mid] <= i) l = mid+1;
        else r = mid -1;
    }
    return l;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> d (n);
    for(auto &i: d) cin >> i;
    sort(d.begin(),d.end());
    int q, m; cin >> q;
    while(q--){
        cin >> m;
        cout << bs(d,m) << '\n';
    }
}