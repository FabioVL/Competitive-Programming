#include <bits/stdc++.h>
using namespace std;

int s=1;

int main()
{
	string s1;
	int n,k,v,b;
	scanf("%d %d",&n,&k);
	b=k;
	for(int i=1;i<=n;i++)
	{
		cin >> v >> s1;
		if(s1 == "SAFE") s = max(s,v); 
		if(s1 == "BROKEN") b = min(b,v);
	}
	printf("%d %d\n",s+1,b-1);
}