#include <bits/stdc++.h>
using namespace std;

int main()
{
	string op;
	int n,m,k,x;
	int q[4];
	int a[1004][1004];
	cin >> n >> m >> k;
	for(int i=0;i<k;i++)
	{
		cin >> op >> x;
		{
			for(int j=0;j<m;j++)
			{
				if(op=="L")
				{
					a[x][j] = i%4;
				}
				if(op=="C")
				{
					a[j][x] = i%4;
				}
			}
		} 
	}
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) q[a[n][m]]++;
	printf("R%d H%d C%d P%d\n",q[0],q[1],q[2],q[3]);
}