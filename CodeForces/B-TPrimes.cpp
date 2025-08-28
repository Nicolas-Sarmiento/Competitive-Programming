#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1000007;
vector<bool> v(MAX, true);
vector<ll> s;
void sieve(){
    ll i = 2;
    while(i*i <= MAX){
        if(v[i]){
            for(int ix = i*i; ix < MAX; ix += i){
                v[ix] = false;
            }
        }
        i++;
    }
    for(i = 2; i < MAX; i++){
        if(v[i]) s.push_back(i*i);
    }
}

bool search(ll q){
    ll l = 0, r = s.size()-1, mid;
    while( l <= r){
        mid = l + (r-l)/2;
        if(s[mid] == q) return true;
        else if( s[mid] < q)  l = mid+1;
        else r = mid-1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int n; cin >> n;
    ll q;
    while(n--){
        cin >> q;
        cout << (search(q)?"YES":"NO") << '\n';
    }
    return 0;
}