#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	string c;
	scanf("%d\n",&n);
	while(n--)
	{
		stack<char> v;
		v.push('a');
		getline(cin,c);
		if(c.size()==0) printf("Yes\n");
		else
		{
			for(int i=0;i<c.size();i++)
			{
				if(c[i]=='[' or c[i]=='(') v.push(c[i]);	
				else if(c[i]==']' and v.top()=='[') v.pop();
				else if(c[i]==')' and v.top()=='(') v.pop();
				else v.push(c[i]);				
			}
			v.size()==1 ? printf("Yes\n") : printf("No\n");
		}
	}
}
