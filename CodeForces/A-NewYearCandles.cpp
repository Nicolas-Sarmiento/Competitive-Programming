#include <iostream>
using namespace std;
int main(){
    int a, b, c,aux; cin >> a >> b;
    c = a;
    while(a >= b){
        c += a/b;
        aux = a%b;
        a /= b;
        a+=aux;        
    }
    cout << c ;
    return 0;
}