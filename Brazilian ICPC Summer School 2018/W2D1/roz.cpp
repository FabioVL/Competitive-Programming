#include <bits/stdc++.h>
using namespace std;

int q[26],ans;
string s;
int n;

int main()
{
	cin >> n >> s;
	for(int i=0;i<n;i++) q[s[i]-'a']++;

	for(int i=0;i<26;i++)
	{
		for(int j=i+1;j<26;j++)
		{
			if(q[i] and q[j])
			{	
				int b = 0, bt = 0,a = 0, at=0;
				for(int k=0;k<n;k++)
				{
					if(s[k]==i+'a') a++,at++;
					if(s[k]==j+'a') 
					{			
						if(s[k-1]!=j+'a') ans = max(ans, max(a-1,(at-bt)-(bt==0))),b=0;
						bt++;
						a=0;
						b++;						
					}
				}
				ans = max(ans, at-bt);
			}
		}
	}
	cout << ans << "\n";
}