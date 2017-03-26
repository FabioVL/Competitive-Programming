#include <bits/stdc++.h>
using namespace std;

int main()
{
	string op;
	int v,n,a[105],cont=0,p[105];

	scanf("%d",&n);
	for(int i=1;i<=100;i++) a[i]=i, p[i]=0;
	for(int i=0;i<n;i++)
	{
		cin >> op >> v;
		for(int j=1;j<=100;j++)
		{
			if(op == "ADD") a[j] += v;
			else if(op == "SUBTRACT") 
			{
				a[j] -= v;
				if(a[j]<0 and p[j]==0) cont++,p[j]=1;
			}			
			else if(op == "MULTIPLY") a[j]*=v;
			else
			{
				if(a[j]%v != 0 and p[j]==0) cont++,p[j]=1;				
				a[j]/=v;
			}
		}
	}
	printf("%d\n",cont);
}

/*




*/