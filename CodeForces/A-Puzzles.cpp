#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, aux, m ; cin >> n >> m;
    vector<int> puzzles;
    for (size_t i = 0; i < m; i++){
        cin >> aux;
        puzzles.push_back(aux);
    }
    sort(puzzles.begin(), puzzles.end());
    --n;
    int diff = puzzles.at(puzzles.size() - 1) - puzzles.at(0); 
    for (size_t i = 0; i < m - n ; i++){
       
        if( puzzles.at(i+n) - puzzles.at(i) < diff ){
            diff = puzzles.at(i+n) - puzzles.at(i);
        }
    }
    cout << diff << '\n';
    return 0;
}