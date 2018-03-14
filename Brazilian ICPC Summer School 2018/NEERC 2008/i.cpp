#include <bits/stdc++.h>
using namespace std;

vector<string> v1,v2;
string x;

int main()
{
	freopen("isharp.in","r",stdin);
	freopen("isharp.out","w",stdout);
	cin >> x;
	v1.push_back(x);
	while(x.find(";")==string::npos)
	{
		cin >> x;		
		v1.push_back(x);
	}

	for(int i=0;i<v1.size();i++)
		v2.push_back(v1[0]);

	for(int i=1;i<v1.size();i++)
	{
		for(int j=v1[i].size()-1;j>0;j--)
		{
			if(v1[i][j]=='&')
				v2[i]+='&';
			if(v1[i][j]=='*')
				v2[i]+='*';
			if(v1[i][j]==']')
				v2[i]+='[';
			if(v1[i][j]=='[')
				v2[i]+=']';
		}

		v2[i]+=' ';
		
		for(int j=0;j<v1[i].size();j++)
		{
			if(v1[i][j]!='&' and v1[i][j]!='*' and v1[i][j]!='[' and v1[i][j]!=']' and v1[i][j]!=',' and v1[i][j]!=';')				
				v2[i]+=v1[i][j];					
		}

		v2[i]+=";";
	}
	for(int i=1;i<v2.size();i++)
		cout << v2[i] << endl;

}