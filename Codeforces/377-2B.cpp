#include <bits/stdc++.h>

int main(){

	int n,k,a[505],b[505],w=0;

	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	a[n]=k;
	b[0] = a[0];

	for(int i=0;i<n;i++){

		if(a[i+1]+b[i]<k)
		{
			w+=k-a[i+1]-b[i];
			b[i+1]=k-b[i];
		}
		else b[i+1]=a[i+1];
	}
	printf("%d\n",w);
	for(int i=0;i<n;i++) printf("%d ",b[i]);
	printf("\n");

}