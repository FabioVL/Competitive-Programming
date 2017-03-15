#include <bits/stdc++.h>

int main()
{
	int k;
	while(scanf("%d",&k)!=EOF)
	{
		int y,tot=0;
		for(int i=k+1;i<=2*k;i++) if(i*k % (i-k) == 0) tot++;
		printf("%d\n",tot);
		for(int i=k+1;i<=2*k;i++)
		{
			y = i*k/(i-k);
			if(i*k % (i-k) == 0) printf("1/%d = 1/%d + 1/%d\n",k,y,i);
		}
	}
}


/*
1/k = 1/x + 1/y
1/y = 1/k - 1/x
1/y = (x-k)/xk
y = xk/(x-k)

*/