#include <bits/stdc++.h>
using namespace std;

const int N=1e6;

int vis[N];
vector <int> adj[N];

int longest(int u)
{
	int ans;
	queue<int> bfs;
	bfs.push(u);
	while(!bfs.empty())
	{
		int v = bfs.front();
		for(int w : adj[v]) if(!vis[w]) vis[w] = vis[v]+1, bfs.push(w);
		ans = bfs.back();
		bfs.pop();
	}
	return ans;
}

int main()
{
	
}
