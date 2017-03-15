#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	char c;
	scanf("%d\n",&n);
	while(n--)
	{
		int a[300],m=0;
		memset(a,0,sizeof(a));
		scanf("%c",&c);
		while(c!='\n')
		{
			if(c>='A' and c<='Z') c+=32;
			a[c]++;
			scanf("%c",&c);
		}
		for(int i='a';i<='z';i++) m = max(m,a[i]);
		for(int i='a';i<'a'+27;i++) if(a[i]==m) printf("%c",i);
		printf("\n");
		m=0;
	}
}