#include <bits/stdc++.h>
using namespace std;

int main(){

	long long b,d,s,k=0;
	scanf("%lld%lld%lld",&b,&d,&s);
	long long a = max(max(b,d),s);
	if(a>b) k+=a-b-1;
	if(a>d) k+=a-d-1;
	if(a>s) k+=a-s-1;
	printf("%lld\n",k);
}