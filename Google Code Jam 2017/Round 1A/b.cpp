#include <bits/stdc++.h>
using namespace std;

double a[55][55],c[55][55],ma=0,mi;
int b[55];
int n,p,t,caso,v,cont;

int main()
{
	scanf("%d",&t);
	while(caso<t)
	{
		cin >> n >> p;

		for(int i=0;i<n;i++) scanf("%d",&b[i]);

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<p;j++)
			{
				scanf("%lf",&a[i][j]);
			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<p;j++) printf("%lf ",a[i][j]);
			printf("\n");
		}
		printf("\n\n");


		for(int i=0;i<n;i++) sort(a[i],a[i]+p);

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<p;j++)
			{
				a[i][j] /= b[i];
			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<p;j++) printf("%lf ",a[i][j]);
			printf("\n");
		}
		printf("\n\n");

		for (int i=0;i<n;i++)
			for(int j=0;j<p;j++)
			{
				c[j][i] = a[i][j];
			}

		for(int i=0;i<p;i++)
		{
			for(int j=0;j<n;j++) printf("%lf ",c[i][j]);
			printf("\n");
		}
		printf("\n\n\n\n\n");

		for(int i=0;i<p;i++)
		{
			mi=1000005;
			ma=0;
			for(int j=0;j<n;j++) ma = max(ma,c[i][j]),mi=min(mi,c[i][j]);
			printf("\n\nMax: %lf e min:%lf\n\n",ma,mi);
			printf("debug:%lf\n",((mi*11)/9));
			if(ma <= ((mi*11)/9)) cont++;
		}
		printf("Case #%d: %d\n",caso+1,cont);
		cont=0;
		caso++;
	}
}


/*


18,8 - 90%
20,8 - 100%
22,97





*/