#include <bits/stdc++.h>
using namespace std;

int dp[1004][1004];

int lcs(string s1, string s2,int m, int n)
{
	for (int i=0;i<=m;i++)
		for(int j=0;j<=n;j++)
		{
			if(i==0 or j==0) dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
			else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
		}
	return dp[m][n];
}

int main()
{
	string s1,s2;
	while(getline(cin,s1))		
	{
		getline(cin,s2);
		printf("%d\n",lcs(s1,s2,s1.length(),s2.length()));
		memset(dp,0,sizeof(dp));
	}
}