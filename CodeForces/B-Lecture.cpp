#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    string a, b;
    map<string, string> d;
    for (size_t i = 0; i < m; i++){
        cin >> a >> b;
        d[a] = b;
    }
    a = "";
    b = "";
    string msg;
    
    for (int i = 0; i < n; i++){
        cin >> a;
        if( a.length() <= d[a].length()){
            msg+= a;
        }else{
            msg+= d[a];
        }
        msg += ' ';
    }
    cout << msg;
    return 0;
}