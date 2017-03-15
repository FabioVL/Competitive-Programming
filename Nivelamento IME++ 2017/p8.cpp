#include <bits/stdc++.h>
using namespace std;

int soma,n,m;
char c;

int main()
{
	while(~scanf("%d%c", &n, &c))
	{
		soma+=n;
		m = max(m,soma);
		if (soma < 0) soma=0;
		if(c == '\n') printf("%d\n",m), soma = m = 0;
	}
}