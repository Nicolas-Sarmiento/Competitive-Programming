#include<iostream>
using namespace std;
int main(){
    int n, x, y; cin >> n;
    while(n--){
        cin >> x >> y;
        if( y >= -1){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}