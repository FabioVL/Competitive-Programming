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
				L = i;
				while(R<n  and s[R-L]==s[R]) R++;
				z[i] = R-L;
				R--;
			}
		}
	}
}

int main()
{
	// cin.tie(0);
	ios_base::sync_with_stdio(0);	
	while(cin >> s)
	{
		int i=0;
		int len = s.length();		
		string ans="";
		zf();
		while(z[i]+i < len and i<len) ans += s[i], i++;
		cout << ans << "\n";
	}
}
