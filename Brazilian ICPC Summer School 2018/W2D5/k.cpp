#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

set<ll> s1,s2;
ll n,m,x;
vector<ll> v;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		cin >> x;
		if(x!=1) v.pb(x);
	}
	s1.insert(-n);
	while(!s1.empty())
	{
		ll a = *s1.begin();
		s2.insert(a);
		s1.erase(a);
		for(int i=0;i<v.size();i++)
		{
			if(a==0) continue;
			if(v[i]!=0) s1.insert(a/v[i]);		} 
	}
	cout << s2.size() << "\n";
}