#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
    vector<vector<int>> grid ( 3, vector<int>(3, 0) );
    int val;
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            cin >> val;
            grid[i][j] = val;
        }
    }
    vector<pair<int, int>> d = { {-1,0}, {1,0}, {0,1}, {0,-1}}; 
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            int cell_val = grid[i][j];
            for ( pair<int, int> p : d ) {
                if ( p.first + j >= 3 || p.first + j < 0 || p.second + i >= 3 || p.second + i < 0 ) continue;
                cell_val += grid[ p.second + i ][p.first + j]; 
            }
            cout << (!(cell_val % 2));
        }
        cout << '\n';
    }
    return 0;
}
