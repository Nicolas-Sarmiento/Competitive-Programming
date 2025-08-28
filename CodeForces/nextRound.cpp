//completed
#include <iostream>
using namespace std;
int main(){
    int n, k, kScore, counter = 0, temp, win = 0;
    cin >> n >> k;
    while (n--)
    {
        counter++;
        cin >>temp;
        if (temp == 0)
        {
            break;
        }
        
        if (counter <= k)
        {
            kScore = temp;
        }

        if (temp >= kScore)
        {
            win++;
        }
    
    }
    cout << win << '\n';
    return 0;
}