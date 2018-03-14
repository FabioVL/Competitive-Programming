#include <bits/stdc++.h>
using namespace std;

int n,c,m1,m2,lucro;
int p[200005];

int main()
{
	cin >> n >> c;
	for(int i=0;i<n;i++) cin >> p[i];
	m1 = m2 = p[0];

	for(int i=1;i<n;i++)
	{
		if((m1 - p[i] >= c) or p[i] < m2)
		{
			if(m1 - m2 -c > 0) lucro += m1 - m2 - c;
			m1 = m2 = p[i];
		}
		m1 = max(m1,p[i]);
	}
	if(m1-m2-c > 0) lucro += m1 - m2 - c;
	cout << lucro << endl;
}


/*

13 30
10 80 20 40 30 50 40 60 50 70 60 10 200

m1 m2 p[i]

10 10 10
80    80
      20



 */