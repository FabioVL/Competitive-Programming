#include <bits/stdc++.h>
using namespace std;

string ss(string a)
{
	int n = a.length();
	if(n%2) return a;
	string k = ss(a.substr(0,n/2));
	string l = ss(a.substr(n/2));
	return min(k+l,l+k);
}

int main()
{
	string x,y;
	cin >> x >> y;
	cout << (ss(x) == ss(y)?"YES":"NO");
}