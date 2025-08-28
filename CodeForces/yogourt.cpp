#include <iostream>
using namespace std;

int main(){
    int times, n, a,b, p1 = 0, p2 = 0;
    cin >> times;
    while (times--)
    {
        cin>>n>>a>>b;

        p1 = ((n/2) * b ) + ((n%2) * a);
        p2 = n*a;

        cout<< ( p1 >= p2? p2:p1) << '\n';
    }
    
    return 0;
}