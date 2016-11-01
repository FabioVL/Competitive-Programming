#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[102];
	int r;
	scanf("%s",a);
	r=min(abs(a[0]-'a'),26-abs(a[0]-'a'));
	for (int i=0; i<strlen(a)-1; i++)
	{
		r+=min(abs(a[i+1]-a[i]),26-abs(a[i+1]-a[i]));
	}
	printf("%d\n",r);
}