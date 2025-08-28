#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}



struct Fraction {
    ll num, den;

    Fraction(ll n = 0, ll d = 1) {
        ll g = gcd(abs(n), abs(d));
        num = n / g;
        den = d / g;
        if (den < 0) { 
            num = -num;
            den = -den;
        }
    }

    Fraction operator+(const Fraction& o) const {
        ll n = num * o.den + o.num * den;
        ll d = den * o.den;
        return Fraction(n, d);
    }

    Fraction operator*(const Fraction& o) const {
        ll n = num * o.num;
        ll d = den * o.den;
        return Fraction(n, d);
    }

    bool operator<(const Fraction& o) const {
        return num * o.den < o.num * den;
    }
    bool operator>(const Fraction& o) const {
        return o < *this;
    }
    bool operator==(const Fraction& o) const {
        return num == o.num && den == o.den;
    }
    bool operator!=(const Fraction& o) const {
        return !(*this == o);
    }
    bool operator<=(const Fraction& o) const {
        return !(*this > o);
    }
    bool operator>=(const Fraction& o) const {
        return !(*this < o);
    }

    void print() const {
        cout << num << "/" << den << "\n";
    }
};



int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    vector<vector<ll>> dices (3, vector<ll>(6));
    for(auto &d : dices ){
        for (auto &i : d){
            cin >> i;
        }
        sort(d.begin(), d.end());
    }

    vector<Fraction> probs (3);
    Fraction dice_p (1,6);
    for( ll i = 0; i < 3; i++){
        Fraction max_p (1,1);
        for ( ll j = 0; j < 3; j++){
            if ( j == i )continue;
            ll n , d;
            Fraction f (0,1);
            for( ll di = 0; di < 6; di++){
                n = lower_bound(dices[j].begin(), dices[j].end(), dices[i][di]) - dices[j].begin();
                d = 6 - (upper_bound(dices[j].begin(), dices[j].end(), dices[i][di]) - lower_bound(dices[j].begin(), dices[j].end(), dices[i][di]));
                
                if (d <= 0){
                    n = 0;
                    d = 1;
                }
                Fraction nf (n, d);
                f = f + nf;
            }
            f = f * dice_p;
            max_p = min(max_p, f);
        }
        probs[i] = max_p;
    }

    ll ans = 0;
    Fraction target (1,2);
    for(ll i = 0; i < 3; i++){
        //probs[i].print();
        if( probs[i] >= target ) { ans = i+1; break;} 
    }

    if ( ans > 0) cout << ans;
    else cout << "No dice";
    cout << '\n';
    return 0;
}