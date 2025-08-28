#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n; cin >> t;
    while (t--){
        cin >> n;
        int a[n];
        for(auto &i: a) cin >> i;
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(i%2) sum -= a[i];
            else sum += a[i];
        }
        cout << sum << '\n';
    }
    
    return 0;
}