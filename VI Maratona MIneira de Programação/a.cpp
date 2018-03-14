#include <bits/stdc++.h>
using namespace std;

int d,i,x,f;

int main()
{
	cin >> d >> i >> x >> f;
	if(d%2) printf("%d\n",(d+f)%2?i:i+x);
	else printf("%d\n",(d+f)%2?i-x:i); 
}