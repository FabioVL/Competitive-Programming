#include <bits/stdc++.h>
using namespace std;

int i=100;
int N=200;

int n;
vector<int> l, adj[i];
int vis[N];

void dfs(int u){
	vis[u]=1;
	for(int v:adj[u]) if(!vis[v]) dfs(v);
	l.push_back(u);
}

int main(){
	/*

	...
	
	*/
	for(int i=0;i<n;i++) if(!vis[i]) dfs(i);
}