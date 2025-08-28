
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, p = 0, s=0, c=0;
    cin >> t;
    int n[t];
    for (size_t i = 0; i < t; i++)
    {
        cin >> n[i];
        s += n[i];
    }
    sort(n, n+t, greater<int>());
    s /= 2;
    for (size_t i = 0; i < t; i++)
    {
        if ( p <= s){
            p+= n[i];
            c++;
        }
        else
        {
            break;
        }
    }
    cout << c << '\n';
    return 0;
}