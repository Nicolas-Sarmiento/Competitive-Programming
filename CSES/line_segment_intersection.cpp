#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct P {
    ll x, y;
};

ll cross(const P &a, const P &b, const P &c) {
    // cross product of AB × AC
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

bool onSegment(const P &a, const P &b, const P &c) {
    // is c on the closed segment ab?
    // first check collinear
    if ( cross(a, b, c) != 0 ) return false;
    // then check bounding box
    return (min(a.x, b.x) <= c.x && c.x <= max(a.x, b.x)
         && min(a.y, b.y) <= c.y && c.y <= max(a.y, b.y));
}

bool intersects(const P &a, const P &b, const P &c, const P &d) {
    ll c1 = cross(a, b, c);
    ll c2 = cross(a, b, d);
    ll c3 = cross(c, d, a);
    ll c4 = cross(c, d, b);

    // general case: straddle
    if ( ((c1 > 0 && c2 < 0) || (c1 < 0 && c2 > 0)) && ((c3 > 0 && c4 < 0) || (c3 < 0 && c4 > 0)) ) {
        return true;
    }

    // special cases: one point lies exactly on the other segment
    if (c1 == 0 && onSegment(a, b, c)) return true;
    if (c2 == 0 && onSegment(a, b, d)) return true;
    if (c3 == 0 && onSegment(c, d, a)) return true;
    if (c4 == 0 && onSegment(c, d, b)) return true;

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        P a, b, c, d;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
        cout << (intersects(a, b, c, d) ? "YES\n" : "NO\n");
    }
    return 0;
}
