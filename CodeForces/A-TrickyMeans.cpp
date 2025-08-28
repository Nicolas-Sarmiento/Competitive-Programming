#include<bits/stdc++.h>
using namespace std;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ld> v (n); for(auto &i : v) cin >> i;
        ld A=0, G=1, H=0;
        for(int i = 0; i < n; i++){
            A+=v[i];
            G *= v[i];
            H += (1/v[i]);
        }
        ld N = (ld)n;
        A = A/(ld)N;
        G =pow(G, 1.0/N);

        H = N / H;
        cout << fixed << setprecision(9) << A << ' ' << G << ' '<< H << '\n';
    }
    return 0;
}