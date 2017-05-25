#include <bits/stdc++.h>
using namespace std;

int n,p,l,c,q1,q2,q3,r1,r2;
int a[504][504][504];

int main()
{
	cin >> n >> p;
	for(int i=1;i<=p;i++) scanf("%d%d",&l,&c), a[l][c][1]=1,r1++; //ler pretas
	for(int i=1;i<=p;i++) scanf("%d%d",&l,&c), a[l][c][1]=2,r2++; //ler brancas
	for(int k=1;k<n;k++){
		for(int i=1;i<=n-k;i++){
			for(int j=1;j<=n-k;j++){
				if(a[i][j][k]==1 or a[i+1][j][k]==1 or a[i][j+1][k]==1 or a[i+1][j+1][k]==1) q1=1; 
				if(a[i][j][k]==2 or a[i+1][j][k]==2 or a[i][j+1][k]==2 or a[i+1][j+1][k]==2) q2=1; 
				if(a[i][j][k]==3 or a[i+1][j][k]==3 or a[i][j+1][k]==3 or a[i+1][j+1][k]==3) q3=1; 
				if(q3==1) a[i][j][k+1]=3;
				else{
					if(q1==0 and q2==0) a[i][j][k+1]=0;
					if(q1==1 and q2==0) a[i][j][k+1]=1,r1++;
					if(q1==0 and q2==1) a[i][j][k+1]=2,r2++;
					if(q1==1 and q2==1) a[i][j][k+1]=3;
				}
				q1=0,q2=0,q3=0;
			}
		}
	}
	printf("%d %d\n",r1,r2);
}