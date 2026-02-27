#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<string> board (n);
    for ( string &s : board ) cin >> s;
    
    vector<string> chess (n);
    for( int i = 0; i < n; i++ ) {
        char f = i % 2 ? 'B' : 'W';
        for ( int j = 0; j < m; j++ ) {
            chess[i].push_back(f);
            f = f == 'W'? 'B' : 'W';
        }
    }
    
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            cout << (board[i][j] == '.' ? chess[i][j] : '-');
        }
        cout << '\n';
    }
    
}
