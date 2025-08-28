#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int m, s, smx, smn, d; cin >> m >> s;
    if( (s < 1 && m != 1 )|| s > (m*9) ){
        cout << "-1 -1" << '\n';
        return 0;
    }
    string mx, mn;
    smx = s, smn = s;
    for(int i = 0; i < m; i++){
        d = smx - 9 >= 0 ? 9 : smx;
        smx -= d;
        mx.push_back('0' + d);
    }

    d = mx[m-1] == '0' && m != 1? 1 : 0;
    for(int i = m-1; i >= 0; i--){
        if( m-1 == i && d ){
            mn.push_back('1');
            continue;
        }
        if( d  && mx[i] != '0'){
            mn.push_back(mx[i] - 1);
            d = 0;
            continue;
        }
        mn.push_back(mx[i]);
    }
    cout << mn << ' ' << mx << '\n';
    return 0;
}