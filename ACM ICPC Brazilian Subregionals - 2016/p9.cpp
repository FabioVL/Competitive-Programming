#include <bits/stdc++.h>
using namespace std;

int a[50004], esq[50004], dir[50004];
int n,m;

int main()
{
	cin >> n;
	for (int i=1;i<=n;i++) cin >> a[i];
	esq[1]=1;
	for(int i=1;i<=n;i++) esq[i+1] = min(esq[i]+1,a[i+1]);
	
	dir[n]=1;
	for(int i=n;i>=1;i--) dir[i-1] = min(dir[i]+1, a[i-1]);
	
	for(int i=1;i<n;i++) m = max(m, min(dir[i],esq[i]));
	printf("%d\n",m);
}

/*

16
5 6 5 8 9 10 5 8 9 5 7 9 9 9 6 3

 */