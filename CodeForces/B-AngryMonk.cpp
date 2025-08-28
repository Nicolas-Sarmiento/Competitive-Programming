#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t, n, k; cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> a (k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int result = 0;
        for(int i = 0; i < k-1; i++){
            result += (2*a[i])-1;
        }
        cout << result << '\n';
    }
    return 0;
}