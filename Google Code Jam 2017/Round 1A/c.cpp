#include <bits/stdc++.h>
using namespace std;

int hd,ad,hk,ak,b,d,t,caso,resp,h,cont;

void fr(int h,int hd,int ak, int d)
{
	if(ak-d<=0) return;
	if(ak-d>h)
	{
		cont++;
		return fr(hd,hd,ak,d);
	}
	else
	{
		cont++;
		return fr(h-ak,hd,ak-d,d);
	}
}


/*
5 1 4 3 1 1

3 1 4 2 1 1
2 1 4 1 1 1
2 1 4 0 1 1


1 3
2 4

min(hk/ad,hk/(ad+b)+1)

5





*/



int main()
{
	scanf("%d",&t);
	while(caso<t)
	{
		cin >> hd >> ad >> hk >> ak >> b >> d;

		if(ak-d > hd-ak+d) cout << "IMPOSSIBLE" << endl;
		else
		{
			fr(hd,hd,ak,d);
		}
		cout << cont << endl;

		caso++;
	}
}