#include <iostream>
using namespace std;
int main(){
    int n, t; cin >> n >> t;
    string q; cin >> q;
    while (t--)
    {
        for (size_t i = 0; i < n-1; i++){
            if (q[i] == 'B' && q[i+1] == 'G'){
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
    }
    cout << q << '\n';
    return 0;
}