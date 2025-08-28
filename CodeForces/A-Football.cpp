#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    string goal;
    pair<string, int> winner;
    map<string, int> score;
    while(t--){
        cin >> goal;
        if(score.find(goal) != score.end()){
            score[goal]++;
        }else{
            score[goal] = 1;
        }
    }
    winner.first= "";
    winner.second = 0;
    for(auto &t : score){
        if(t.second > winner.second){
            winner.first = t.first;
            winner.second = t.second;
        }
    }
    cout << winner.first << '\n';
    return 0;
}