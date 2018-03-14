#include <bits/stdc++.h>
using namespace std;

struct TReta {

	double a,b,c;
};

struct TVector{

	double x,y;

	TVector operator+(TVector q) const {

		return {x+q.x,y+q.y};
	}	

	TVector operator-(TVector q) const {

		return {x-q.x,y-q.y};
	}

	TVector operator*(double t) const {

		return {x*t,y*t};
	}

	double operator*(TVector q){

		return (x*q.x + y*q.y);
	}

	double operator^(TVector q){ //produto vetorial

		return x*q.y - y*q.x;
	}

	double operator~() const {

		return sqrt(x*x + y*y);		
	}

	double operator/(TReta t) const {
		return fabs((t.a*x + t.b*y + t.c))/(sqrt(t.a*t.a + t.b*t.b));
	}

};


int main()
{
	double x0,y0,x1,y1,d,xc,yc,r;
	TVector p1,p2,O;
	TReta t1,n1;

	cin >> x0 >> y0 >> x1 >> y1;
	p1 = {x0,y0};
	p2 = {x1,y1};
	t1 = {y1-y0,x0-x1,y0*x1-y1*x0};
	n1 = {t1.a,t1.b};

	cin >> xc >> yc >> r;
	O = {xc,yc};
	d = O/t1;

	if(d>=r) printf("%.6f\n",~(p2-p1));
	else 
	{		
		double alfa,beta,phi,psi,gama;
		alfa = asin(r/(~(O-p1)));
		beta = asin(r/(~(O-p2)));
		phi = acos(fabs(((O-p1)*(p1-p2)))/((~(O-p1))*(~(p1-p2))));
		psi = acos(fabs(((O-p2)*(p1-p2)))/((~(O-p2))*(~(p1-p2))));
		gama = alfa + beta - phi - psi;
		double da,db,ab;
		ab = ~(p1-p2);
		da = ~(O-p1);
		db = ~(O-p2);
		if((db*db > ab*ab + da*da) or (da*da > ab*ab + db*db))
		{
			printf("%.6f\n",~(p2-p1));
			return 0;	
		}
		printf("%.6f\n",sqrt(da*da-r*r) + sqrt(db*db-r*r)+gama*r);
	}
}