#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
int vis[100],b[100];
int ans;

bool match(int u, int x){
	if (vis[u]==x) return false;
	vis[u]=x;
	for(int v: adj[u]){
		if(!b[v] or match(b[v],x)) return b[v]=u;
	}
	return false;
}


int main()
{
	/*
	input;
	*/
	for(int i=1;i<=n;i++) ++x, ans += match(i,x);
}