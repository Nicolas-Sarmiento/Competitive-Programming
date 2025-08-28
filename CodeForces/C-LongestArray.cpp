#include<bits/stdc++.h>
using namespace std;     
typedef long long ll;
const int MAX = 44730;
vector<ll> S (MAX);

void s(){
    S[0] = 0;
    for(ll i = 1; i < MAX; i++){
        S[i] = S[i-1] + i; 
    }
}
int search(ll n){
    int l = 0, r = S.size()-1, mid;
    while (l <= r){
        mid = l + (r-l)/2;
        if(S[mid] > n){
            r = mid-1;
        }else if(S[mid] < n){
            l = mid+1;
        }else{
            return mid;
        }
    }
    return l - 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    s();
    int t; cin >> t;
    ll l, r, diff;

    while(t--){
        cin >> l >> r;
        diff = r -l;
        cout << search(diff)+1 << '\n';
    }
    return 0;
}