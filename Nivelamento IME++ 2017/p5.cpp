#include <bits/stdc++.h>
using namespace std;

int a[110],t,n,valor,soma;
int dp[105][30000];

// m é a metade do vetor (valor a ser alcançado); n é a quantidade de moedas
int knapsack(int soma, int a[], int n)
{
	for (int i=0;i<=n;i++)
		for (int j=0;j<=soma/2;j++)
		{
			if(i==0 or j==0) dp[i][j]=0;
			else if (a[i]>j) dp[i][j] = dp[i-1][j];
			else dp[i][j] = max(a[i] + dp[i-1][j-a[i]], dp[i-1][j]);
		}
	return dp[n][soma/2];
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		soma=0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++) scanf("%d",&a[i]), soma+=a[i];
		printf("%d\n",soma-2*knapsack(soma,a,n));
		memset(dp,0,sizeof(dp));
		memset(a,0,sizeof(a));
	}
}