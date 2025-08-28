#include <iostream>
using namespace std;

int main(){
    int t, n,k, a; cin >> t;
    while(t--){
        cin >> n >> k;
        int rr[n];
        for (size_t i = 0; i < n; i++){
            cin >> rr[i];
        }

        if (k == 4){
            int e = 0;
            for (size_t i = 0; i < n; i++)
            {
                if (rr[i]%2 == 0) e++;
            }
            cout <<( e >= 2) ? 0 : 2-e; 
            
        }else{
            for (size_t i = 0; i < n; i++)
            {
                /* code */
            }
            
        }
        
        
    }
    return 0;
}