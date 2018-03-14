#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x=0,y=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1' || s[i]=='3') x+= (1 << s.size()) >> (i+1);
		if(s[i]=='2' || s[i]=='3') y+= (1 << s.size()) >> (i+1);
	}
	printf("%d %d %d\n",s.size(),x,y);
}