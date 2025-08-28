#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main(){
    string s; cin >> s;
    string l, r = "", aux = "";
    l = regex_replace(s,regex("WUB")," ");
    for (size_t i = 0; i < l.length(); i++){
        if(l[i] != ' '){
            aux += l[i];
            continue;    
        }
        
        if( aux.length() > 0){
            r += " " + aux;
            aux = "";
        }
    }
    if( aux.length() > 0){
        r += " " + aux;
    }
    r = r.replace(r.begin(), r.begin()+1, "");
    cout << r << '\n';
    return 0;
}