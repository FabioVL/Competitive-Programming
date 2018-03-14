#include <bits/stdc++.h>
using namespace std;

int p;

int main()
{
	int pos=2,cont=1;
	cin >> p;
	while(pos!=1)
	{
		(pos<=p/2) ? pos*=2 : pos = 2*pos-p-1;
		cont++;
	}
	cout << cont << endl;
}