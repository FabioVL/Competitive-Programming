#include <bits/stdc++.h>
using namespace std;

int n,cont;
string a,b;
map <string,int> m;
vector<string> v;

int main()
{		
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(m.count(a)>0) m[a]++;
		else m[a]=1;
		if(a=="MSU" and m[a]<=4) cont++,v.push_back(a+" "+b);		
		else if(a!="SCH" and m[a]<=2) cont++,v.push_back(a+" "+b);
	}
	if (cont>10) cont = 10;
	cout << cont << endl;
	for(int i=0;i<cont;i++)
		cout << v[i] << endl;
}