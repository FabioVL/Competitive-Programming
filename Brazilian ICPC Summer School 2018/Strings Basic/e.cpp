#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const int N = 1e5+5;
const ull B = 31;

ull h1[N],h2[N],h3[N],b[N],pos;
string s;

int main()
{
	cin >> s;
	int n = s.length();
	h1[0] = s[0]*1;
	
	b[0]=1;
	for(int i=1;i<N;i++) b[i]=(b[i-1]*B);
	
	for(int i=1;i<n;i++) h1[i] = h1[i-1]*B + s[i];
	reverse(s.begin(),s.end());
	
	h2[0]=s[0]*1;
	for(int i=1;i<n;i++) h2[i] = h2[i-1]*B + s[i];
	reverse(s.begin(),s.end());
	
	h3[0] = h2[n-1];
	for(int i=1;i<n;i++) h3[i] = h3[0] - h2[i-1]*b[n-i];
	
	for(int i=0;i<n;i++) if(h1[i]==h3[n-1-i]) pos=i;
	printf("%llu\n",pos+1);	
}