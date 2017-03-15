#include <bits/stdc++.h>
using namespace std;

int t,n,k,a[110],r,valor;
int K[110][1010];

int dp(int k, int a[], int n)
{
	for(int i=0;i<=n;i++)
	{
		for (int j=0;j<=k;j++)
		{
			if(i==0 or j==0) K[i][j]=0;
			else if (a[i] > j) K[i][j] = K[i-1][j];
			else K[i][j] = max(a[i] + K[i-1][j-a[i]], K[i-1][j]);
		}
	}
	return K[n][k];
}


int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&r);
			for(int j=1;j<=r;j++) scanf("%d",&valor), a[i]+=valor;
		}

		printf("%d\n",dp(k,a,n));
		memset(a,0,sizeof(a));
	}
}