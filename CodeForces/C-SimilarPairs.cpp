#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v ( n ); for(auto &i : v) cin >> i;
        unordered_set <ll> even;
        vector<ll> odd;
        ll evens = 0;
        for(auto &i : v) {
            if( i % 2) odd.push_back(i);
            else{ even.emplace(i); evens++;}
        }

        if( !(odd.size()%2) && !(evens % 2)){
            cout << "YES\n";
        }else{
            bool fd = false;
            for(auto od : odd){
                if( even.count(od - 1) || even.count(od+1)){ fd = true; break;}
            }
            cout << (fd? "YES" : "NO") << '\n';
        }
    }
    return 0;
}