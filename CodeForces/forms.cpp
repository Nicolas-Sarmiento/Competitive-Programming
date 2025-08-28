#include <iostream>
using namespace std;
void fn( int n ){
    int rm = n, s = 0, r = 0;
    while (rm)
    {
        s = 3;
        while (rm % s < 3 && rm % s != 0)
        {
            s++;
        }
        r += (rm/s);
        rm = rm % s;
    }

    cout << r <<'\n';
}

void fn2( int n ){
    int s = 3, r = 0;
    
    while (n % s < 3 && n % s != 0)
    {
        s++;
    }
    
    r += (n/s) + ( n % s != 0 ? 1:0 );
    cout << r << '\n';
}

void fn3( int n ){
    cout << n /3 << '\n';
}
int main(){
    for (size_t i = 1; i <= 100; i++)
    {
        cout<< i << " : ";
        fn3(i);
    }
    return 0;
}