#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int rating; cin >> rating;
        cout << "Division ";
        if ( rating >= 1900 ) cout << 1 ;
        else if ( rating >= 1600 ) cout << 2 ;
        else if ( rating >= 1400 ) cout << 3 ;
        else cout << 4 ;
        cout << '\n'; 
    }
}
