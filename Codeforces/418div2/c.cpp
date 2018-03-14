#include <bits/stdc++.h>
using namespace std;

string s;
int n,t,q[27];
vector<int> v[27];
char c;

int main()
{
	for(int i=0;i<26;i++) q[i] = 100000000;
	cin >> n;
	cin >> s;
	for(int i=0;i<n;i++) c = s[i], v[c-'a'].push_back(i);
	for(int i=0;i<26;i++)
	{
		for(int j=1;j<v[i].size();j++)
		{
			q[i]=min(q[i],v[i][j]-v[i][j-1]);
		}
	} 
	cin >> t;
	while(t--)
	{
		int q;
		char ch;
		cin >> q >> ch;

	}
}