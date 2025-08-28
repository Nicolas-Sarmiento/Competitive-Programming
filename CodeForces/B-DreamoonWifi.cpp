#include <bits/stdc++.h>
using namespace std;
using lf = long double;

lf fact( lf n ){
  if( n <= 1 ) return 1;
  return n * fact(n-1);
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  string a, b; cin >> a >> b;
  lf np = 0, nm = 0, bp = 0, bm = 0, bi = 0;
  for(auto i: a){
    if( i == '+') np++;
    else nm++;
  }
  for(auto i : b){
    if( i == '+') bp++;
    else if ( i == '-')bm++;
    else bi++;
  }
  
  lf ans;

  if( np == bp && nm == bm){
    ans = 1;
  }else if ((abs(np - bp) + abs(nm - bm)) == bi ){
    //calc binomial
    lf n = abs(np - bp);
    lf cb = fact(bi)/(fact(n) * fact(bi - n));
    ans = cb * ( pow(0.5, bi));
  }else{
    ans = 0;
  }
  cout << setprecision(9) << fixed <<ans <<'\n';
  return 0;
}
