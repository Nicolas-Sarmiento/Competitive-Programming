#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, tg;
    int h = 0, cnt = 0;
    bool pop = false;
    cin >> s;
    stack<char> st;
    for(auto &i: s){
        tg += i;
        if( i != '<' && i != '>' && i != '/'){
            if(tg[tg.length()-2] == '/'){
                pop = true;
            }else{
                st.push(i);
                pop = false;
            }
        }
        if(i == '>'){
            h = st.size()-1;
            for(int i = 0; i < (2*h); i++) cout <<' '; 
            cout << tg << '\n';
            tg = "";
            if(pop) st.pop();
        }
    }
    return 0;
}