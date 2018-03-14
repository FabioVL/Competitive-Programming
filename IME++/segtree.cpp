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

int tree[4*N], a[N], lz[4*N];

void build(int p, int l, int r)
{
	if(l==r) { tree[p] = a[l]; return;}
	int m = (l+r)/2;
	build(2*p,l,m);
	build(2*p+1,m+1,r);

	tree[p] = min(tree[2*p],tree[2*p+1]);
}

void push(int p, int l, int r)
{
	if(lz[p])
	{
		tree[p] += lz[p];
		if(l!=r) lz[2*p] = lz[2*p+1] = lz[p];
		lz[p] = 0;
	}
}

int query(int p, int l, int r, int i, int j)
{
	push(p, l, r);
	if(r < i or l > j) return INF;
	if(l >= i and r <= j) return tree[p];
	int m = (l+r)/2;
	return min(query(2*p, l, m, i, j), 
		query(2*p+1, m+1, r, i, j));
}

void update(int p, int l, int r, int i, int j, int val)
{
	push(p, l, r);
	if(r < i or l > j) return INF;
	if(l >= i and r <= j) { lz[p] = v, push(p,l,r); return}
	int m = (l+r)/2;
	update(2*p, l, m, i, j, v);
	update(2*p+1, m+1, r, i, j, v);
	tree[p] = min(tree[2*p], tree[2*p+1])

}

int main()
{
	
}
