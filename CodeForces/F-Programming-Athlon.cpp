#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Team{
    string name;
    int index;
    int score;
};
bool compareTeam(Team& a, Team& b){
    if( a.score != b.score){
        return a.score > b.score;
    }
    return a.index < b.index;
}
int main(){
    int N; cin >> N;
    string nm;
    int P = 0, score = 0;
    vector<Team> sc;
    for(int i = 0; i < N; i++){
        vector<int> tr (6);
        cin >> nm >> P;
        for(int i = 0; i < 6;i++){
            cin >> tr[i];
        }
        sort(tr.begin(),tr.end());
        score = (P*10)+tr[1]+tr[2]+tr[3]+tr[4];
        sc.push_back({nm, i, score});  
    }
    sort(sc.begin(),sc.end(), compareTeam);
    cout << sc[0].name << ' ' << sc[0].score << '\n';
    cout << sc[1].name << ' ' << sc[1].score << '\n';
    cout << sc[2].name << ' ' << sc[2].score << '\n';
    int i = 3;
    while(i < N && sc[i].score == sc[2].score){
        cout << sc[i].name << ' ' << sc[i].score << '\n';
        i++;
    }
    return 0;
}