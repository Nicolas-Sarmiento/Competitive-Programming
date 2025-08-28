#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int g; cin >> g;
    vector<int> m (12);
    for(int i = 0; i < 12; i++){
        cin >> m[i];
    }
    
    sort(m.begin(),m.end());
    int i = 11, n = 0;
    while( i >= 0 && g > 0 ){
        g -= m[i];
        i--;
        n++;
    }
    if ( g > 0){
        cout << -1;
    }else{
        cout << n;
    }
    return 0;
}