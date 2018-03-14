#include <bits/stdc++.h>
using namespace std;

int n,m;
int dp[60][60][12],z[60][60];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

int makedp(int i, int j, int m)
{
	if (i<0 or i>n or j<0 or j>n) return 0;
	if (z[i][j]==0) return -2;
	if (m==0) return 0;
	int resp=dp[i][j][m];
	if(resp==-1)
	{
		for (int x=0; x<4; x++)
		{
			int aux=z[i][j];
			z[i][j]=0;
			dp[i][j][m] = max(dp[i][j][m],aux+makedp(i+dx[x],j+dy[x],m-1));
			z[i][j]=aux;
		}
	}
	return dp[i][j][m];
}

int main()
{
	cin >> n >> m;
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> z[i][j];
	memset(dp,-1,sizeof(dp));
	int resp=-1000;
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) printf("%d ",makedp(i,j,m));
		printf("\n");
	}
	printf("\n");
	for (int i=0; i<n; i++)	for(int j=0;j<n;j++) resp = max(resp,makedp(i,j,m));
	cout << resp << endl;
}