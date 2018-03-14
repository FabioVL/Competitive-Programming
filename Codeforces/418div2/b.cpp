#include <bits/stdc++.h>
using namespace std;

int n,fa,fb;
int a[1004],b[1004],qa[1004],qb[1004];

int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i],qa[a[i]]++;
	for(int i=1;i<=n;i++) cin >> b[i],qb[b[i]]++;

	for(int i=1;i<=n;i++) if(qa[i]==0) fa=i;
	for(int i=1;i<=n;i++) if(qb[i]==0) fb=i;

	for(int i=1;i<=n;i++)
	{
		if(a[i]!=b[i])
		{
			a[i]=fa;
			break;
		}
	}

	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	printf("\n");
}

/*

1 2 3
2 2 3
1 3 3


 */