#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,op,s2,sresp;
	cin >> s1 >> op >> s2;
	replace(s1.begin(),s1.end(),'7','0');
	replace(s2.begin(),s2.end(),'7','0');
	int n1,n2,resp;
	n1 = atoi(s1.c_str());
	n2 = atoi(s2.c_str());
	(op=="+")? resp = n1+n2 : resp = n1*n2;
	stringstream ss;
	ss << resp;
	sresp = ss.str();
	replace(sresp.begin(),sresp.end(),'7','0');
	resp = atoi(sresp.c_str());
	cout << resp << endl;
}