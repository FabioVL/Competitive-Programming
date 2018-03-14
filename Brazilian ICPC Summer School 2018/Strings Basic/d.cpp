#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

int z[N];
string s;

void zf()
{
	int L=0, R=0, n = s.length();
	for(int i=1;i<n;i++)
	{
		if(i>R)
		{
			L = R = i;
			while (R<n and s[R-L]==s[R]) R++;
			z[i] = R-L;
			R--;
		}
		else
		{
			int k = i-L;
			if(z[k] < R-i+1) z[i] = z[k];
			else
			{
				L=i;
				while(R<n and s[R-L] == s[R]) R++;
				z[i] = R-L;
				R--;
			}
		}
	}
}

int main()
{
	cin >> s;
	zf();
	for(int i=0;i<s.length();i++) printf("%d ",z[i]);
	printf("\n");
}