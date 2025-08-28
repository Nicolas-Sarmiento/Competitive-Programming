#include<iostream>
using namespace std;
int main(){
    int t,a,b,c; cin >> t;
    while(t--){
        cin >> a >> b >> c;
        for(int i = 0; i < 5; i++){
            if((a <= b) && (a <= c)) a++;
            else if ( b <= c) b++;
            else c++;
        }
        cout << a*b*c << '\n';
    }
    return 0;
}