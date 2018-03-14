#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l,c,x,y,casa;
	string esq = "Esquerda", dir = "Direita";
	cin >> l >> c >> x >> y;
	casa = x*c + y;
	cout << (casa%2 ? esq : dir) << endl;
}