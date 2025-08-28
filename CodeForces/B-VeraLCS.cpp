#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n, k; cin >> n >> k;
    string s; cin >> s;


    ll f [26] = {0};
    
    for(auto &i : s){
        f[ i - 97]++;
    }

    ll im = 0, mn = f[0];
    for(ll i = 1 ; i < 26; i++){
        if( f[i] < mn){
            mn = f[i];
            im = i;
        }
    }

    if( k < mn || k > n){
        cout << "WRONGANSWER\n";
        return 0;
    }
    ll fill = n - k;
    char c = 'a' + im;
    while(fill--){
        cout << c;
    }
    for( ll i = 0; i < k; i++){
        cout << s[i];
    }
    cout << '\n';
    return 0;
}