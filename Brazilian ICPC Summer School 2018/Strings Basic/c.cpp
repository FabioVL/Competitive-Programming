#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

int p[N];
string s;

void pf()
{
	int n = s.length();
	p[0]=0;
	for(int i=1;i<n;i++)
	{
		p[i]=p[i-1];
		while(s[i]!=s[p[i]] and p[i]>0) p[i] = p[p[i]-1];
		if(s[i]==s[p[i]]) p[i]++;
	}
}


int main()
{
	cin >> s;
	pf();
	for(int i=0;i<s.length();i++)
		printf("%d ",p[i]);
	printf("\n");
}
