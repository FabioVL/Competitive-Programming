#include <bits/stdc++.h>
using namespace std;

int dp[2004][2004],t;

int min(int a, int b, int c)
{
	return min(min(a,b),c);
}

int ed(string s1, string s2, int m, int n)
{
	for(int i=0;i<=m;i++)
		for(int j=0;j<=n;j++)
		{
			if (i==0) dp[i][j] = j;
			else if (j==0) dp[i][j]=i;
			else if (s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
			else dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
		}
	return dp[m][n];
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		printf("%d\n",ed(s1,s2,s1.length(),s2.length()));
		memset(dp,0,sizeof(dp));
	}
}