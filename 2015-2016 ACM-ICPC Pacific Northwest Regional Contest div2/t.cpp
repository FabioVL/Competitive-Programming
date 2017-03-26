#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1,a2,a3,b1,b2,b3;
	scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
	if (a1>a2) swap(a1,a2);
	if(a2>a3) swap(a2,a3);
	if(a1>a2)swap(a1,a2);
	if (b1>b2) swap(b1,b2);
	if(b2>b3) swap(b2,b3);
	if(b1>b2)swap(b1,b2);
	if(a1!=b1 or a2!=b2 or a3!=b3)
	{
		printf("NO\n");
		return 0;
	}
	(a1*a1+a2*a2==a3*a3) ? printf("YES\n") : printf("NO\n");
}
