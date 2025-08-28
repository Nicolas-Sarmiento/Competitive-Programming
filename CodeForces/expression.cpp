
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b>>c;
    int r[4];
    r[0] = a*b*c;
    r[1] = (a+b) * c;
    r[2] = a * (b+c);
    r[3] = a + b + c;
    sort(r, r+4);
    cout << r[3] <<'\n';
    return 0;
}