#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{

    bool prime[1005];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1005; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= 1005; i += p) prime[i] = false;
        }
    }
    if(!prime[n]) cout << n << '\n';
    else if(!prime[n+1]) cout << n+1 << '\n';   
    else cout << n+2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >>n;
    solve(n);
    return 0;
}