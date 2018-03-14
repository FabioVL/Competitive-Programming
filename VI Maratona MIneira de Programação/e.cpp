#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<long long> s;
	long long n,k,r,resp=1;
	long long poke[200005];
	cin >> n >> k >> r;
	for (int i=0; i<n; i++) scanf("%d",&poke[i]);
	for (int i=0; i<r; i++)
	{
		int d,e;
		cin >> d >> e;
		for (int j=d-1; j<=e-1; j++) s.insert(poke[j]);
		int w=0;
		for (set<long long>::reverse_iterator it=s.rbegin(); w<k and it!=s.rend(); it++,++w)
		{
			resp = resp*(*it);
			resp = resp%(1000000007);
		}
		printf("%lld\n",resp);
		s.clear();
		resp=1;
	}
}