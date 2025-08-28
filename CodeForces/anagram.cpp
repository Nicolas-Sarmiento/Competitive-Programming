#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    string s1 = "aazzhjd";
    string s2 = "zhzjdaa";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout << s1 << '\n'; 
    cout << s2 << '\n'; 
}