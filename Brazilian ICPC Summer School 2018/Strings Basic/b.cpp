#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int p[N], n, z[N], pos;
string s;

void zf()
{
	int L = 0, R = 0, len = s.length();
	for(int i=1;i<n;i++)
	{
		if(i>R)
		{
			L = R = i;
			while(R<len and s[R-L] == s[R]) R++;
			z[i] = R-L;
			R--;
		}
		else
		{
			int k = i-L;
			if(z[k]< R-i+1) z[i] = z[k];
			else
			{
				L = i;
				while(R<len and s[R-L]==s[R]) R++;
				z[i] = R-L;
				R--;
 			}
		}
	}
}

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) cin >> p[i];
	s = "";
	s += 'A';
	for(int i=1;i<n;i++) 
	{
		if(p[i]!=0) s += s[p[i]-1];
		else 
		{
			s += (s[pos]+1);
			if (pos ) pos = i;
		}
	}
	cout << pos << " e " << s << endl;
	zf();
	for(int i=0;i<n;i++) printf("%d ",z[i]);
	printf("\n");
}