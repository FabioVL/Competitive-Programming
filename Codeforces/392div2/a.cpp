#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,soma=0,a[1000004],m=0;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		m = max(m,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<m) soma+=(m-a[i]); 
	}
	printf("%d\n", soma);
}