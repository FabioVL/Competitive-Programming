#include <bits/stdc++.h>
using namespace std;

int a[300005];
int c,n,op;

int main()
{
	cin >> c >> n;
	for (int i = 0; i < n; i++)	cin >> op, a[op]=1;
	for (int i=1; i<c; i++) a[i]+=a[i-1]; 
	int k = c/n;
	int i,j;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1;j++) if(a[i+(j+1)*k] != a[i+j*k]+1) break;
		if(j==n-1) break;
	}
	if (i<k) cout << "S" << endl;
	else cout << "N" << endl;
}


/*


c=12 n=3 k=4
0 0 1 0 0 0 0 0 1 0 0 1
0 0 1 1 1 1 1 1 2 2 2 3



 */