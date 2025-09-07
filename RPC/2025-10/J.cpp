#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n; cin >> n;
	string s;
	set <string> st;
	for(int i = 0; i < n;i++){
		cin >> s;
		st.insert(s);
	}
	int m; cin >> m;
	
	while(m--){
		cin >> s;
		if(st.count(s)){
			cout << 1 << '\n';
			continue;
		}
		string s1, s2;
		vector<pair<string,string> > v;
		
		for(int i = 0; i < s.length()-1;i++){
			s1.push_back(s[i]);
			s2 = s.substr(i+1);
			v.push_back({s1,s2});
		}
		bool c = false;
		for(int i = 0; i < v.size();i++){
			if( st.count(v[i].first)&& st.count(v[i].second)){
				c = true;
			}
		}
		
		cout << (c? 2: 0) << '\n';
	}
	return 0;
}