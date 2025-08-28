#include <iostream>
using namespace std;
int main(){
    int t, n, m, g; cin >> t;
    bool c = true;

    while(t--){
        cin >> n >> m;
        int x[n][m];
        for (size_t i = 0; i < n; i++){
            for (size_t j = 0; j < m; j++){
                cin >> x[i][j];
            }
        }
        
        for (size_t i = 0; i < n; i++){
            for (size_t j = 0; j < m; j++){
                c = true;
                g = 0;
                if(i+1 >= 0 && i+1 < n){
                    c = x[i+1][j] >= x[i][j] ? false : c;
                    g = x[i+1][j] > g ? x[i+1][j] : g;
                }  
                if(i-1 >= 0 && i-1 < n){
                    c = x[i-1][j] >= x[i][j] ? false : c;
                    g = x[i-1][j] > g ? x[i-1][j] : g;
                }  
                if(j+1 >= 0 && j+1 < m){
                    c = x[i][j+1] >= x[i][j] ? false : c;
                    g = x[i][j+1] > g ? x[i][j+1] : g;
                }  
                 if(j-1 >= 0 && j-1 < m){
                    c = x[i][j-1] >= x[i][j] ? false : c;
                    g = x[i][j-1] > g ? x[i][j-1] : g;
                } 

                if (c){
                    x[i][j]  =  g;
                }
                
            }
            
        }

        for (size_t i = 0; i < n; i++){
            for (size_t j = 0; j < m; j++){
                cout <<  x[i][j] << ' ';
            }
            cout << '\n';
        }
        
    }
    return 0;
}