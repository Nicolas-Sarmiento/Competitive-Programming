
#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, m;
   cin >> n >> m;
   
   vector<vector<int>> s(n+1, vector<int>(m+1));

   int ans = 0;

   for (int i = 0; i < n; i++) {
      string line;
      cin >> line;

      for (int j = 0; j < m; j++) {
         s[i+1][j+1] = line[j]-'0' + s[i][j+1] + s[i+1][j] - s[i][j];
         for (int ii = 0; ii <= i; ii++) {
            for (int jj = 0; jj <= j;jj++) {
               int amt = (i+1-ii)*(j+1-jj);
               if (s[i+1][j+1] - s[ii][j+1] - s[i+1][jj] + s[ii][jj] == amt) ans = max(ans, amt);
            }
         }
      }
   }

   cout << ans << '\n';
}