#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	printf((a==b or a==c or b==c or a+b==c or a+c==b or b+c==a) ? "S\n" : "N\n");
}