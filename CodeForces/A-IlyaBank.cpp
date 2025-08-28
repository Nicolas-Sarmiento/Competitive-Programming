#include <iostream>

using namespace std;
int main(){
    int n; cin >> n;
    if (n >= 0){
        cout << n  << '\n'; 
    }else{
        int last = n / 10;
        int before = ((n/100)*10 )+  n%10;    
        cout << max(last, before) << '\n';
    }
    return 0;
}