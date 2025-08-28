#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, sum = 0, m, idx = 0, ans = 0; cin >> n >> k;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    for(int i =0; i < n; i++){
        sum += v[i];
        if((i+1) == k){
            m = sum;
        }else if((i+1) > k){
            sum -= v[idx];
            idx++;
            m = min(m, sum);
            if(m == sum){
                ans = idx;
            }
        }
    }
    cout << ans+1 << '\n';
    return 0;
}