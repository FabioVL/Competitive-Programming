#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n,a[N],v1[N],v2[N],pos;
long long sum;

int main()
{
	freopen("hell.in","r",stdin);
	freopen("hell.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		v1[a[i]]++;
		sum+=a[i];
	}
	if(sum%2){
		cout << "No" <<endl;
		return 0;
	}
	sum=sum/2;
	for(int i=n;i>0;i--){

		if(v1[i]){
			while(sum>0 and i<=sum and v1[i])
			{
				sum-=i;
				v2[i]++;
				v1[i]--;
			}
		}
	}

	if(sum){
		cout << "No" << endl;
		return 0;
	}
	printf("Yes\n");
	for(int i=1;i<=n;i++){
		if(v2[a[i]]){
			printf("1 ");
			v2[a[i]]--;
		}
		else printf("-1 ");	
	}
	printf("\n");
}