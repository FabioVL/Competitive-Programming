#include <bits/stdc++.h>
using namespace std;

int main()
{
	double l,r,a,b,c,d,xm,ym,x1,x2,y1,y2,resp;
	cin >> l >> r >> a >> b >> c >> d;
	xm = (a+c)/2, ym = (b+d)/2;
	if (a==c)
	{
		(b<d) ? resp=(ym/r) : resp=(1-ym/r);
		printf("%.6lf %.6lf\n",resp,1-resp);
		return 0;
	}
	if (b==d)
	{
		(a<c) ? resp=(xm/l) : resp=(1-xm/l);
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
	x1 = (0-ym)*(b-d)/(c-a) + xm;
	x2 = (r-ym)*(b-d)/(c-a) + xm;
	if (x1>0 and x1<l and x2>0 and x2<l)
	{
		(a<xm) ? resp = (x1+x2)/2*l : resp = 1 - (x1+x2)/2*l;
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
	if (x1<=0)
	{
		x1=0;
		y1=(0-xm)*(c-a)/(b-d) + ym;
		resp = (r-y1)*x2/(2*l*r);
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
	if (x2<=0)
	{
		x2=0;
		y2=(0-xm)*(c-a)/(b-d) + ym;
		resp = y2*x1/(2*l*r);
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
	if (x1>=l)
	{
		x1=l;
		y1=(l-xm)*(c-a)/(b-d) + ym;
		resp = (l-x2)*(r-y1)/(2*l*r);
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
	if (x2>=l)
	{
		x2=l;
		y2=(l-xm)*(c-a)/(b-d) + ym;
		resp = (l-x1)*y2/(2*l*r);
		printf("%.6lf %.6lf\n", resp,1-resp);
		return 0;
	}
}