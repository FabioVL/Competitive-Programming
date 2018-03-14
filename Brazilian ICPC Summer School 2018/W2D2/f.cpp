#include <bits/stdc++.h>
using namespace std;

stack<char> p1,p2,p3;
string s,s1;

int main()
{
	cin >> s;
	s1 = s;
	int n = s.length();

	if(s.empty()) return cout << "" << endl, 0;

	for(int i=0;i<n;i++)
	{
		if(p2.size()==0) p2.push(s[i]);		
		else if(s[i]=='(' or s[i]=='[' or s[i]=='{') p2.push(s[i]);
		else
		{
			if(s[i]==')')
			{
				if(p2.top()=='(') p2.pop();
				else p2.push(s[i]);
			}
			if(s[i]==']')
			{
				if(p2.top()=='[') p2.pop();
				else p2.push(s[i]);
			}
			if(s[i]=='}')
			{
				if(p2.top()=='{') p2.pop();
				else p2.push(s[i]);
			}
		}
	}

	if(p2.size()==0) return cout << s << endl, 0;

	char c = p2.top();
	
	while((c=='(' or c=='[' or c=='{') and p2.size()>0)
	{
		if(c == '(') p2.pop(), s += ')';
		else if(c == '[') p2.pop(), s += ']';
		else if(c == '{') p2.pop(), s += '}';
		else break;
		if (p2.size()>0) c = p2.top();		
	}

	while(p2.size()!=0)
	{
		p3.push(p2.top());
		p2.pop();
	}

	if(p3.size()==0) return cout << s << endl, 0;

	reverse(s.begin(),s.end());

	c = p3.top();
	while((c==')' or c==']' or c=='}') and p3.size()>0)
	{
		if(c == ')') p3.pop(), s += '(';
		else if(c == ']') p3.pop(), s += '[';
		else if(c == '}') p3.pop(), s += '{';
		else break;
		if (p3.size()>0) c = p3.top();
	}
	reverse(s.begin(),s.end());
	if(s1 == s) 
	{
		printf("NIE\n");
		return 0;
	}

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' or s[i]=='[' or s[i]=='{') p2.push(s[i]);
		else
		{
			if(s[i]==')')
			{
				if(p2.top()=='(') p2.pop();
				else return cout << "NIE" << endl, 0;
			}
			if(s[i]==']')
			{
				if(p2.top()=='[') p2.pop();
				else return cout << "NIE" << endl, 0;
			}
			if(s[i]=='}')
			{
				if(p2.top()=='{') p2.pop();
				else return cout << "NIE" << endl, 0;
			}
		}	
	}

	cout << s << endl;

};