#include <bits/stdc++.h>
using namespace std;

long long n,b,r,c,cont;

int main()
{
	cin >> n >> b;

	if(b == n*n and n%2 == 1)
	{
		printf("%lld %lld\n",(n+1)/2, (n+1)/2);
		return 0;
	}

	long long l=0,r=n,m,z=0;

	while(l<=r)
	{
		m = (l+r)/2;
		if(4*m*(n-m) < b)
		{
			z = m;
			l = m+1;
		}
		else r = m-1;
	}

	r = z+1;
	c = z;
	b -= 4*z*(n-z);
	n -= z*2;

	if(b>n) 
	{
		b-=n;
		c+=n;
	}
	else
	{
		printf("%lld %lld\n",r,c+b);
		return 0;
	}
	if(b>n-1)
	{
		b -= (n-1);
		r += (n-1);
	} 	
	else
	{
		printf("%lld %lld\n",r+b,c);
		return 0;
	}

	if(b>n-1)
	{
		b -= (n-1);
		c -= (n-1);
	}
	else
	{
		printf("%lld %lld\n",r,c-b);
		return 0;
	}

	printf("%lld %lld\n",r-b,c);
	// printf("%lld\n",b);

}