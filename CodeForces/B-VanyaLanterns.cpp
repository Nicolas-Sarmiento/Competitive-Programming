#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout <<fixed;
    cout << setprecision(9);
    int n; 
    double l;
    cin >> n >> l;
    vector<double> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end());
    double d = max(v[0], (l-v[n-1]));
    for(int i = 0; i < n-1; i++){
        d = max(d, (v[i+1]-v[i])/2);
    }
    cout << d << '\n';
    return 0;
}