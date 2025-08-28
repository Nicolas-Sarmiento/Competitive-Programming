#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    vector<ll> ugly(1505);
    ugly[0] = 1;
    int two_index = 0, three_index = 0, five_index = 0;
    for(int i = 1; i <= 1500;i++){
        ll next_2 = ugly[two_index]*2;
        ll next_3 = ugly[three_index]*3;
        ll next_5 = ugly[five_index]*5;

        ll next_sq = min( next_2, min(next_3,next_5));

        ugly[i] = next_sq;

        if(ugly[i] == next_2) two_index++;
        if(ugly[i] == next_3) three_index++;
        if(ugly[i] == next_5) five_index++;
    }
    cout << "The 1500'th ugly number is " <<ugly[1499]<< ".\n";
    return 0;
}