#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lm = 1e5;
vector<ll> p;
vector<bool> pr (lm+5,true);

void s(){
    for(ll i = 2; i*i <= lm; i++){
        if(pr[i]){
            for(ll j = i*i; j <= lm; j+=i){
                pr[j] = false;
            }
        }
    }
    for(ll i = 2; i <= lm; i++){
        if(pr[i]) p.push_back(i);
    }
}

ll bn(ll d, ll s){
    ll l = 0, r = p.size()-1;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if((p[mid]-s) == d) return p[mid];
        else if( (p[mid] - s) > d) r = mid-1;
        else l = mid+1;
    }
    return p[l];
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    s();
    int t; cin >>t;
    while(t--){
        ll d; cin >> d;
        ll n1 = bn(d, 1);
        ll n2 = bn(d, n1);
        cout << n1 * n2 << '\n';
    }
    return 0;
}
