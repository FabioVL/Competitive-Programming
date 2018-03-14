#include <bits/stdc++.h>
using namespace std;

int n,x,y;
vector<pair<int,int> >v;
set<pair<int,int> >s;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	if(n<=3) 
	{
		printf("0\n");
		return 0;
	} 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			s.insert(make_pair(v[i].first+v[j].first,v[i].second+v[j].second));
	}
	if(s.size()==(n*(n-1)/2)) printf("2\n");
	else cout << 1 << endl;

}