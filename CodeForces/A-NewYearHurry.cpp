#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int rm = 240 - k;
    int l = 1, r = n, mid, t, b=0;
    
    while (l <= r){
        mid = l + (r - l) / 2;
        t = 5*(mid*(mid+1))/2;
        if(t == rm){
            b = mid;
            break;
        }
        if( t < rm){
            l = mid+1;
            b = mid;
        }else{
            r = mid-1;
        }
    }
    cout << b << '\n';
    
    return 0;
}