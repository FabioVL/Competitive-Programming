#include <bits/stdc++.h>
using namespace std;

int n; //n = tamanho do vetor
int bit[10000];

void update(ins pos, int x)
{
	for(; pos<n; pos += (pos&-pos))	bit[pos]+=x;
}

int query(int pos)
{
	int soma=0;
	for(; pos>0; pos -= (pos&-pos)) soma += bit[pos];
	return soma;
}

