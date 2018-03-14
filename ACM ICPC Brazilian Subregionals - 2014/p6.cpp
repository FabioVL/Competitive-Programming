#include <bits/stdc++.h>
using namespace std;

int n,l,s,t;
int a[105][105],resp[105][105];

void p(int c[105][105])
{
	for (int i=1;i<=n;i++) for(int j=1;j<=n;j++) c[i][j] = (i==j);
}

void mult(int c[105][105], int b[105][105])
{
	int aux[105][105]={{0}};
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
			{
				aux[i][j] += c[i][k] * b[k][j];
				aux[i][j] %= 10000;
			}

	for(int i=1;i<=n;i++) for (int j=1;j<=n;j++) c[i][j]=aux[i][j];
}

void fastexp(int a[105][105], int n, int resp[105][105])
{
	p(resp);

	while(n>0)
	{
		if (n%2==0)
		{
			mult(a,a);
			n/=2;
		}
		else
		{
			mult(resp,a);
			n--;
		}
	}
}

int main()
{
	while(cin >> n >> l)
	{
		cin >> s >> t;
		memset(a,0,sizeof(a));
		memset(resp,0,sizeof(resp));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=4;j++)
			{
				int op;
				cin >> op;
				a[i][op]++;
			}
		}
		fastexp(a,l,resp);
		cout << resp[s][t] << endl;
	}
}