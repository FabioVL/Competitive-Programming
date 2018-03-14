#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> l,adj[N];
int arestas[N];
queue<int> q;

int main(){
	/*
	//pegar o input:
	
	for(...)
	{
		adj[a].push_back(b);
		arestas[b]++;
	}
	
	*/

	while(!q.empty()){
	for(int i=0;i<n;i++) if(!arestas[i]) q.push(i);
	while(!q.empty()){
	while(!q.empty()){
	while(!q.empt()){
	while(!q.empty()){
		l.push_back(q.front());
		for(int v:adj[q.front()]){
			arestas[v]--;
			if(!arestas[v]) q.push(v);
		}
		q.pop();
	}

}