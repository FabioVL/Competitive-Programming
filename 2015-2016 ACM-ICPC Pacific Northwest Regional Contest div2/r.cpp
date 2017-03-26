#include <bits/stdc++.h>
using namespace std;

vector<pair<string,string> > v;

int main()
{
	string s1,s2;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++) cin >> s1 >> s2, v.push_back(make_pair(s2,s1));
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) cout << v[i].second << " " << v[i].first << endl;
}