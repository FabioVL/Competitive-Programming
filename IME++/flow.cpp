#include <bits/stdc++.h>
using namespace std;

struct TEdge{

	int from,to,cap,f;
};

vector<TEdge> edges;
vector<int> adj[VCOUNT];

void add_edge(int from, int to, int cap){

	int index1 = edges.size();
	adj[from].push_back(index1);
	edges.push_back({from, to, cap, 0});
}

int push(int v, int w){

	if(vis[v]) return 0;
	viś[u] = 1;
	for(int ind: adj[u])
	{
		if (edges[ind].f == edges[ind].cap) continue;
		int res = push(edges[ind].to, min(w,c-f));
		if(res==0) continue;
		edges[int.f] += res;
		edges[ind^1].f -= res;
		return res;
	}

	//while
}

int main()
{
	
}