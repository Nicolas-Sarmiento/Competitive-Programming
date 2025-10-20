#include <iostream>

using namespace std;
using ll = long long;


struct Point {
	ll x, y;
	
	Point ( ll xi, ll yi ){
		x = xi;
		y = yi;
	}
};

ll cross_point ( Point a, Point b ){
	return (a.x * b.y) - (b.x * a.y);
}

int main(){
	int t; cin >> t;
	while(t--){
		ll x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		Point l (x2-x1, y2-y1), p (x3 - x1, y3 - y1);
		ll ans = cross_point(l , p);
		if (ans == 0 ){
			cout << "TOUCH";
		}else if ( ans > 0){
			cout << "LEFT";
		}else {
			cout << "RIGHT";
		}
		cout <<  '\n';

	}
}
