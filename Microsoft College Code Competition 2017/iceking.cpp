#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a[13000],i=0,pi,pf,ma=0,n,aux;
	char c;
	while(~scanf("%lld%c",&n,&c))
	{
		a[i] = n, i++;
		if(c=='\n')
		{
			// pi = 0, pf = 1;
			for (int j = 0;j<i;j++)
			{
				for(int k = j;k<i;k++)
				{
					aux = ma;
					ma = max(ma,min(a[j],a[k])*(k-j));
					if(aux != ma) pi = j, pf = k;

				}
			}
			printf("%lld %lld %lld\n",ma,pi,pf);
			i = 0;
			ma = 0;
			memset(a,0,sizeof(a));
		}
	}
	printf("\n");
}