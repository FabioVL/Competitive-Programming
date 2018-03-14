#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > vp,v1,vr;
map<int,int> dic;
const int N = 3e2; 
int A,B,C,n,m,x,f1;

bool comparator(int i, int j){
	return v1[i]<v1[j];
}

int main()
{
	cin >> f1 >> A >> B >> C;
	v1.push_back(make_pair(f1,1));
	cin >> m >> n;
	for(int i=0;i<m;i++) 
		for(int j=0;j<n;j++)
		{
			cin >> x;
			if(dic.count(x)==0) dic[x]=1;
			else dic[x]++;
		}

	for(map<int,int>::iterator it=dic.begin();it!=dic.end();it++)
	{
		pair<int,int> p;	
		vp.push_back(make_pair(it->second,it->first));
	}

	for(int i=1;i<vp.size();i++)
	{
		int l;
		l = ((A*v1[i-1].first+B)%C) + 1;
		v1.push_back(make_pair(l,i+1));
	}

	sort(vp.begin(),vp.end());
	sort(v1.begin(),v1.end());

	for(int i=0;i<vp.size();i++)
	{
		vr.push_back(make_pair(v1[i].second,vp[i].second));
	}

	sort(vr.begin(),vr.end());

	cout << vp.size() << "\n";
	for(int i=0;i<vr.size();i++)
	{
		printf("%d ",vr[i].second);
	}
	printf("\n");

}