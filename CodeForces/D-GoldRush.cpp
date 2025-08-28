#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        if( m > n){
            cout << "NO\n";
            continue;
        }
        queue<ll> q;
        ll aux;
        q.push(n);
        bool fnd = false;
        while (!q.empty()){
            aux = q.front();q.pop();
            if( aux == m){
                fnd = true;
                break;
            }
            if(aux % 3 ) continue;
            q.push(aux/3);
            q.push((2*aux)/3);            
        }
        cout << (fnd? "YES":"NO") << '\n';
    }   
    return 0;
}