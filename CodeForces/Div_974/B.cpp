#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k, odd; cin >> n >> k;
        if( n%2 == 0 || k%2 == 0){
            odd = (k/2);
        }else{
            odd = k - (k/2);
        }

        cout << (odd %2 ?"NO":"YES") << '\n'; 
    }
    


    return 0;
}