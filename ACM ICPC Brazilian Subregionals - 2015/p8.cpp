#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > v;
int n,resp, ma = 100000000, mi = -100000000;

bool compare(pair<int,int> p1, pair<int,int> p2)
{
	if(p1.second == p2.second) return p1.first > p2.first;
	return p1.second > p2.second;
}

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),compare);

	for(int i=0;i<n;i++)
	{
		pair<int,int> p = v[i];
		ma = 100000000, mi = -100000000;
		for(int j=i+1;j<n;j++)
		{
			pair<int,int> aux = v[j];
			if(aux.first>p.first)
			{
				if(aux.first < ma)
				{
					resp++;
					ma = aux.first;
				}
			}
			else
			{
				if(aux.first > mi)
				{
					resp++;
					mi = aux.first;
				}
			}
		}
	}
	cout << resp << endl;
}