#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t, n, aux; cin >> t;
    while(t-- ){
        cin >> n;
        if (n < 10){
            cout << n;
        }else if( n < 46){
            stack<int> q;
            int i = 9;
            while (n > 0)
            {
                if (n < 9){
                    aux = n < i ? n : i;
                    q.push(aux);
                    n -= aux;
                }else{
                    n -= i;
                    q.push(i);
                }
                
                i--;
            }
            while (!q.empty()){
                cout << q.top();
                q.pop();
            }
        }else{
            cout << -1; 
        }
        cout << '\n';
    }
    return 0;
}