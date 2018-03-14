#include <bits/stdc++.h>
using namespace std;

int t,caso,a[1010],n,cont,total,soma;
string s;

int main()
{
	scanf("%d",&t);
	while(caso<t)
	{
		total=soma=0;
		cont = 0;
		cin >> s >> n;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='+') a[i]=1;
			else a[i]=0;
		}

		for(int i=0;i<s.size()-n+1;i++)
		{
			if(a[i]==0)
			{
				for(int j=0;j<n;j++) a[i+j] = 1-a[i+j];
				total++;
			}
		}		
		for(int i=0;i<s.size();i++) soma+=a[i];
		(soma==s.size())? printf("Case #%d: %d\n",caso+1,total) : printf("Case #%d: IMPOSSIBLE\n",caso+1);
		memset(a,0,sizeof(a));
		caso++;
	}
}

/*

-+-+- 4
+-+--
++--+


-+++---- 3
+--+----
+++-----
++++++--
-++-++

01 02 03 04 05 06 07 08 09 10
07 08 10 10 09 04 09 06 03 03

1 7 9 3 10
2 8 6 4 10 3
3 10
4 10 3
5 9 3 10
6 4 10 3
7 9 3 10
8 6 4 10 3
9 3 10
10 3


l[1] = 7 9 3 10

l[1][1] = 7
l[1][2] = 9
l[1][3] = 3
l[1][4] = 10



v = a[.....]
vector<int> v
vector<int> a[10]

a[10][.....]




0 0 3 0 0 0 1 0 2 4
0 0 5 3 0 2 0 1 0 4


int a[100]




1 7 9 3 10 4 6 8 2






*/
