#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector< vector<ll> > m ( n+1, vector<ll> (2*n+1, -1));
    for(ll i = 0;  i <= n; i++){
        for( ll j = i; j <= n; j++){
            m[j][n-j+i] = i;
            m[j][n+j-i] = i;
        }
    }
    bool lc = true;
    for( ll i = 0; i < m.size();i++){
        string o;
        lc = true;
        for ( ll j = 0; j < m[i].size();j++){
            if( m[i][j] == -1 && lc) o.append("  ");
            else if (m[i][j] != -1){
                o.push_back( '0' + m[i][j] );
                o.push_back(' ');
                lc= false;
            } 
        }
        o.erase( o.size()-1 );
        cout << o <<'\n';
    }
    for( ll i = m.size()-2; i >= 0;i--){
        string o;
        lc = true;
        for ( ll j = 0; j < m[i].size();j++){
            if( m[i][j] == -1 && lc) o.append("  ");
            else if (m[i][j] != -1){
                o.push_back( '0' + m[i][j] );
                o.push_back(' ');
                lc= false;
            } 
        }
        o.erase( o.size()-1 );
        cout << o <<'\n';
    }
    return 0;
}