#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int s, n; cin >> s >> n;
    vector<pair<int, int>> dragons;
    int x, y;
    while (n--)
    {
        cin >> x >> y;
        if (s > x)
        {
            s += y;
            continue;
        }
        dragons.push_back({x,y});
    }
    sort(dragons.begin(), dragons.end());
    string r = "YES\n";
    for(auto& d : dragons){
        if (d.first >= s)
        {
            r = "NO\n";
            break;
        }
        
        s+= d.second;
    }
    cout << r;
    return 0;
}