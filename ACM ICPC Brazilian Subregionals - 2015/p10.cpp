#include <bits/stdc++.h>
using namespace std;

int j,r,k,m,p;
int a[505];

int main()
{
	cin >> j >> r;
	k = j*r;
	for(int i=0;i<k;i++)
	{
		int alt;
		cin >> alt;
		a[i%j]+=alt;
	}
	for(int i=0;i<j;i++) 
	if (a[i] >= m)
	{
		m = a[i];
		p = i;
	}
	cout << p+1 << endl;
}