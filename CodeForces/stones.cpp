
#include <bits/stdc++.h>
using namespace std;
signed main(){
    int c = 0, r=1, i=0, n;
    string s;
    cin >> n >> s;
    
    while (r < n && i < n)
    {
        if ( s[i] != s[r])
        {
            i = r;
        }
        else
        {
            c++;
        }
        r++;
    }
    
    cout << c << '\n';
    return 0;
}