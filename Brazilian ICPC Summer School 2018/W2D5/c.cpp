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

ll p, a, b, h, x, y, sp, aret, amax, ok;

int main()
{
	cin >> p >> a;
	if(p%2 != 0) return cout << "NIE\n", 0;
	sp = p/2;
	if(sp-1 > a) return cout << "NIE\n", 0;
	// OBS: olhar caso sp =  impar
	sp%2==0 ? amax = (sp/2)*(sp/2) : amax = (sp/2)*(sp/2 + 1);
	if(amax < a) return cout << "NIE\n", 0;

	b = sp-1, h = 1;
	y=1;
	if(a==b*h) y = 0;
	while(a>b*h)
	{
		b--, h++;
		
		if(b*h==a)
		{ 
			y=0;
			break;
		}
	}
	aret = b*h;
	x = aret-a;

	printf("P");
	for(int i=1;i<b-x;i++) printf("B");
	if(y == 1) printf("PL");
	for(int i=1; i<x;i++) printf("B");
	printf("P");
	for(int i=1;i<h-y;i++) printf("B");
	printf("P");
	for(int i=1;i<b;i++) printf("B");
	printf("P");
	for(int i=1;i<h;i++) printf("B");
	printf("\n");

	
	
}