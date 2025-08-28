#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    long long a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a%b == 0){
            cout << 0;
        }else if( a < b){
            cout << b - a;
        }else{
            cout << ((a/b)+ 1)*b - a;
        }
        cout << '\n';
    }
    
    return 0;
}