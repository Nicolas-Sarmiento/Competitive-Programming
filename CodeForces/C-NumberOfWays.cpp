#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    if (totalSum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    long long target = totalSum / 3;
    long long prefixSum = 0;
    long long countTarget = 0;  
    long long ways = 0;

    for (int i = 0; i < n - 1; i++) {  
        prefixSum += a[i];

        if (prefixSum == 2 * target) {
            ways += countTarget;  
        }

        if (prefixSum == target) {
            countTarget++;
        }
    }

    cout << ways << endl;
    return 0;
}
