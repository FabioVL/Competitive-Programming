#include <bits/stdc++.h>
using namespace std;

int t,n,k,a[110],r,v[110];
int K[70][1100];

int dp(int k, int a[],int v[], int n)
{
	for(int i=0;i<=n;i++)
	{
		for (int j=0;j<=k;j++)
		{
			if(i==0 or j==0) K[i][j]=0;
			else if (a[i] > j) K[i][j] = K[i-1][j];
			else K[i][j] = max(v[i] + K[i-1][j-a[i]], K[i-1][j]);
		}
	}
	return K[n][k];
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&k,&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d",&a[i],&v[i]);
		}
		printf("Hey stupid robber, you can get %d.\n",dp(k,a,v,n));
		memset(a,0,sizeof(a));
		memset(K,0,sizeof(K));
	}
}

/*
5 sacos com valor total 81

se vc pegou 1 saco com valor 30
vc pegou 4 sacos com valor total 51

	K[5][81] 
v[i] + K[i-1][j-a[i]]
 30   +   K[4][51]  ,    K[4][81]

while(t>0)
{
	//codigo;
	t--;
}



*/