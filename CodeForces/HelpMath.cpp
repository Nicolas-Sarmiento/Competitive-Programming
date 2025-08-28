#include <iostream>
using namespace std;
string concatNums(char num, int times);
int main(){
    int o = 0, tw = 0, th = 0;
    string s, r;
    cin >> s;
    if (s.length() == 1)
    {
        cout << s << '\n';
        return 0;
    }
    
    for (size_t i = 0; i < s.length(); i++)
    {

        switch (s[i])
        {
        case '1':
            o++;
            break;
        case '2':
            tw++;
            break;
        case '3':
            th++;
            break;
        default:
            break;
        }
    }
    if (o != 0)
    {
        r += concatNums('1', o);
        if (tw != 0 || th != 0)
        {
            r += "+";
        }
        
    }
    if (tw != 0)
    {
        r += concatNums('2', tw);
        if (th != 0)
        {
            r+= "+";
        }
        
    }
    if (th != 0)
    {
        r += concatNums('3', th);
    }
    
    cout << r << '\n';
    return 0;
}

string concatNums(char num, int times){
    string r;
    for (size_t i = 0; i < times; i++)
    {
        if (i != 0)
        {
            r+= "+";
        }

        r+= num;
        
    }
    return r;
}