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
// const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string s;
int len, K, N, P, ma, me, mi;

int main()
{
	cin >> s;
	len = s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='K') K++;
		if(s[i]=='N') N++;
		if(s[i]=='P') P++;
	}
	ma = max(K,max(N,P));
	mi = min(K,min(N,P));
	me = K+N+P-ma-mi;

	if(ma > me) return cout << "0\n", 0;
	if(me > mi) return cout << "0\n", 0;
	return cout << "1\n", 0;
}