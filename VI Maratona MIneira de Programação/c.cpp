#include <bits/stdc++.h>
using namespace std;

string op;
int n,m,k,x;
int q[5];
int a[1004][1004];

int main()
{
	cin >> n >> m >> k;
	for (int i=0; i<k; i++)
	{
		cin >> op >> x;
		if (op=="L") for (int j=1; j<=m; j++) a[x][j] = (i%4) ? i%4 : i%4+4;
		if (op=="C") for (int j=1; j<=n; j++) a[j][x] = (i%4) ? i%4 : i%4+4;
	}
	for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) q[a[i][j]]++;
	printf("R%d H%d C%d P%d\n",q[4],q[1],q[2],q[3]);
}





/*

0 0 0
0 0 0
0 0 0

lr 0 2 0
lh 0 0 0
lc 0 0 0
lp 0 0 3

cr 0 0 0
ch 0 0 0
cc 2 0 0
cp 0 0 0

 */