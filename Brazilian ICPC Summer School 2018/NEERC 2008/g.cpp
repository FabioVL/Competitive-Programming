#include <bits/stdc++.h>
using namespace std;

long long rh,rv,sh,sv,rhi,rvi,shi,svi,p,n,max1,max2,max3,max4;
long long l1,l2,l3,l4,s1,s2,s3,s4;

long long mi,ans;

const int INF = 0x3f3f3f3f;

int main()
{
	// freopen("giant.in","r",stdin);
	// freopen("giant.out","w",stdout);
	cin >> rh >> rv >> sh >> sv;
	cin >> n;
	ans = INF;
	for(int i=0;i<n;i++)
	{

		cin >> rhi >> rvi >> shi >> svi >> p;
		//Caso horizontal
		//Mínimo para resolucao horizontal
		l1 = (rh/rhi)+(rh%rhi!=0);
		// Mínimo para size
		s1 = (sh/shi)+(sh%shi!=0);
		
		// Caso vertical
		//Mínimo para resolucao horizontal
		l2 = (rv/rvi)+(rv%rvi!=0);
		// Mínimo para size
		s2 = (sv/svi)+(sv%svi!=0);

		//Caso horizontal trocado
		//Mínimo para resolucao horizontal
		l3 = (rh/rvi)+(rh%rvi!=0);
		// Mínimo para size
		s3 = (sh/svi)+(sh%svi!=0);

		//Caso vertical trocado
		//Mínimo para resolucao horizontal
		l4 = (rv/rhi)+(rv%rhi!=0);
		// Mínimo para size
		s4 = (sv/shi)+(sv%shi!=0);

		max1 = l1*l2;
		max2 = s1*s2;
		max3 = l3*l4;
		max4 = s3*s4;

		mi = min(max(max1,max2),max(max3,max4))*p;
		
		ans = min(ans,mi);
		
	}
	printf("%lld\n",ans);

}
