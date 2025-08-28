#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, r; cin >> n >> r;
    set<pair<int,int>> s;
    for(int x = r; x >= -r; x--){
        for(int y = r; y >= -r; y--){
            int d = (x*x) + (y*y);
            if((r*r) >= d) s.insert({x,y});
        }
    }

    int rx, x, y,d,xd, yd, cnt = 0;
    stack<pair<int, int>> st;
    while(n--){
        cin >> rx >> x >> y;
        for(auto &i: s){
            xd = abs(i.first - x);
            yd = abs(i.second-y);
            d = ((xd*xd) + (yd*yd));
            if(d <= (rx*rx)){
                cnt += 1;
                st.push(i);
            }
        }
        while(!st.empty()){
            s.erase(st.top()); st.pop();
        }
    }
    cout << cnt << '\n';
    return 0;
}