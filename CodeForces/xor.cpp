#include<iostream>
using namespace std;

int main(){
    int x = 8;
    int y = 17;
    cout << (x^y) << '\n';
    cout << __popcount(x^y) << '\n';
    return 0;
}