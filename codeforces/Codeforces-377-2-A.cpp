#include <bits/stdc++.h>

int main ()
{
	int k,r,resp;
	scanf("%d%d",&k,&r);

	for(int i=1;i<11;i++) 
		if (k*i%10==0 or ((k*i-r)%10==0))
			{
				printf("%d\n",i);
				return 0;
			}
}
