#include <bits/stdc++.h>
using namespace std;

int n,r,b,y,o,v,g,t,caso,X,Y,Z,W,a;


int main()
{
	scanf("%d",&t);
	while(caso<t)
	{
		vector<char> ve;
		scanf("%d%d%d%d%d%d%d",&n,&r,&o,&y,&g,&b,&v);
		if((r+o+v)+(b+v+g)<(y+o+g) or (r+o+v)+(y+o+g)<(b+v+g) or (y+o+g)+(b+v+g)<(r+o+v)) printf("Case #%d: IMPOSSIBLE\n",caso+1);
		else
		{
			// small:
			a = max(max(r,b),y);
			W = a-r,Y = a-y,Z = a-b,X = a-W-Z-Y;

			for(int i=0;i<X;i++) ve.push_back('R'),ve.push_back('B'),ve.push_back('Y');
			for(int i=0;i<Y;i++) ve.push_back('R'),ve.push_back('B');
			for(int i=0;i<Z;i++) ve.push_back('R'),ve.push_back('Y');
			if (Z>0) for(int i=0;i<W;i++) ve.push_back('B'),ve.push_back('Y');						
			else if(Y>0) for(int i=0;i<W;i++) ve.push_back('Y'),ve.push_back('B');			
			else for(int i=0;i<W;i++) ve.push_back('B'),ve.push_back('Y');

			// large




			printf("Case #%d: ",caso+1);
			for (int i=0;i<ve.size();i++) printf("%c",ve[i]);
			printf("\n");
		}
		caso++;
	}

}




/*

RBY

RB RB RB RB RB 

R + B > Y
B + Y > R
R + Y > B

RBRY

542

RBY RB RY RB RB

RBY RB RY RB RB

RBY RB RY YB 

5
4
2

5


R R R R R
B B B B
Y Y

6 5 3

RBY RB RY RBY RB RB


RBY OGV




























*/

