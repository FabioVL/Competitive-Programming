#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	m = max(a,max(b,c)) - min(a,min(b,c));
	printf("%d\n",m);
}


// abs(a-b)+abs(a-c)