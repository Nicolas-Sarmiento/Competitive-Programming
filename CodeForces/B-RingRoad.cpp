#include <iostream>
using namespace std;
int main(){
    long long n, m,current_house = 1, time = 0; cin >> n >> m;
    long long r[m];
    for (size_t i = 0; i < m; i++){
        cin >> r[i];
    }

    for (size_t i = 0; i < m; i++){
        if (current_house == r[i]){
            continue;
        }

        if (current_house < r[i]){
            time += r[i] - current_house;
        }
        else{
            time += (n - current_house) + (r[i] - 1) + 1;
        }
        current_house = r[i];
    }
    cout << time << '\n';
    return 0;
}