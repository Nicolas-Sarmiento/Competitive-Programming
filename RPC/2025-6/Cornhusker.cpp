#include <iostream>

using namespace std;

int main() {
    int a, l, kernels, total = 0;

    for (int i = 0; i < 5; ++i){
        cin >> a >> l;
        kernels = a * l;
        total += kernels;
    }

    int promedy = total / 5;

    int n, kwf;
    cin >> n >> kwf;

    int totalKernels = promedy * n;
    int bushels = totalKernels / kwf;

    cout << bushels << endl;

    return 0;
}