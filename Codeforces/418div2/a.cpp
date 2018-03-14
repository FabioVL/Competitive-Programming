#include <bits/stdc++.h>
using namespace std;

int n,k,qa;
int a[300],b[300];
string s;

int main()
{
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<k; i++) cin >> b[i];
	s = "Yes";
	if (k>1)
	{
		cout << s << endl;
		return 0;
	}

	for (int i=0; i<n; i++) if (a[i]==0) a[i]=b[0];
	int c;
	for (c=1; c<n; c++) if (a[c]<a[c-1]) break;

	if(c==n) printf("No\n");
	else printf("Yes\n");
}