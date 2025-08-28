#include<iostream>
using namespace std;
int main()
{
    string s;cin>>s;
    for(auto &c : s){
        c=tolower(c);
    }
    cout<<s<<endl;
    for(int i=0;i<s.size()-1;++i)
        if(s[i]=='s'&&s[i+1]=='s')
            cout<<s.substr(0,i)<<'B'<<s.substr(i+2,s.size())<<endl;
}