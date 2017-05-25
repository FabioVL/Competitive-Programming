#include <bits/stdc++.h>
using namespace std;

string s;
vector<char> v;

bool comp(char c){
	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') return true;
	return false;
}

int main()
{
	cin >> s;
	for(int i=0;i<s.length();i++) if(comp(s[i])) v.push_back(s[i]);
	int n=v.size(),a=0;
	for(int i=0;i<n;i++){
		if(v[i]!=v[n-1-i]) a++;
	}
	printf(a ? "N\n" : "S\n");
}