#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	m = min(min(abs(b-a)+abs(c-a),abs(a-b)+abs(c-b)),abs(a-c)+abs(b-c));
	printf("%d\n",m);
}


// abs(a-b)+abs(a-c)