#include<bits/stdc++.h>
using namespace std;
int search(const vector<pair<int,int>> &v, int n){
    int l = 0, r = v.size()-1, mid;
    while (l <= r){
        mid = l + (r-l)/2;
        if(v[mid].first > n){
            r = mid-1;
        }else if(v[mid].second < n){
            l = mid+1;
        }else{
            return mid+1;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a, m, q, b=1;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> a;
        v[i].first = b;
        b+=a;
        v[i].second = b-1;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> q;
        cout << search(v, q) << '\n';
    }
    return 0;
}