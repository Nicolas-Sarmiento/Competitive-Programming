#include <iostream>
using namespace std;
int main(){
    int t, n; cin >> t;
    long long k, max, mC;
    while(t--){
        cin >> n;
        long long arr[n];
        for (size_t i = 0; i < n; i++){
            cin >> arr[i];
        }
        k = 0;
        mC = 0;
        for (size_t i = 1; i < n; i++){
            if( arr[i] < arr[i-1]){
                mC = (arr[i-1] - arr[i]) > mC ? (arr[i-1] - arr[i]) : mC;
                k += (arr[i-1] - arr[i]);
                arr[i] = arr[i-1];
            }
        }
        k += mC;
        cout << k << '\n';
    }
    return 0;
}