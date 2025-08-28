# include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b;

    cin>>a>>b;

    int days = 0;
    int months[] = {1,4,9};
    int vDays[] = {1,4,9,16,25};

    for (int i = ceil(sqrt(a)); i * i <= b; i++) {

        for (int x: months) {
            for (int y: vDays) {
                if (x == 1  && y <= 31) days++;
                if (x == 4  && y <= 30) days++;
                if (x == 9  && y <= 30) days++;
            }
        }
    }

    cout << days << endl;

    return 0;
    
}