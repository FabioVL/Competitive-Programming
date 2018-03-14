#include <bits/stdc++.h>
using namespace std;

string s;
int a[4],b[150];

int main()
{
	int n,kr,kb,ky,kg;
	cin >> s;
	n=s.length();
	for (int i=0;i<n;i++)
	{
		if(s[i]=='!') a[i%4]++;
		else b[s[i]]=i%4;
	}
	printf("%d %d %d %d\n", a[b['R']], a[b['B']], a[b['Y']], a[b['G']]);
}


/*

!GB!RG!Y!





 */