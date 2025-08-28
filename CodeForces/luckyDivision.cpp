#include <iostream>

using namespace std;
int main(){
    int s;
    int v[] = {4,7,47,74,77,444,447,474,477,744,747,774,777};
    cin >> s;
    for(auto i : v){
        if (s % i == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}