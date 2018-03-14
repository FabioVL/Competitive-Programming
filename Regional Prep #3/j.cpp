#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		int aux =0;
		for(int j=0;j<8;j++)
		{
			aux |= ((x^aux)&(2 << j))*2;
		}
		printf("%d ",aux/2);
	}
	printf("\n");
}
