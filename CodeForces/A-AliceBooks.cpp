#include <iostream>
using namespace std;
int main(){
    int t, n, aux, h = 0; cin >> t;
    
    while (t--){
        cin >> n;
        for (size_t i = 1; i <= n; i++)
        {
            cin >> aux;
            if(i < n){h = aux > h ? aux : h;}   
        }
        cout << aux + h << '\n';
        aux = 0;
        h = 0;
    }
    return 0;
}