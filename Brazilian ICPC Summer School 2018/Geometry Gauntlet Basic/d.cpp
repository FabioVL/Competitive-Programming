#include <bits/stdc++.h>
using namespace std;

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

};


int main()
{
	double xa,ya,xb,yb,xc,yc,a,b,c,S;
	TVector A,B,C,O;

	cin >> xa >> ya >> xb >> yb >> xc >> yc;

	A = {xa,ya};
	B = {xb,yb};
	C = {xc,yc};

	a = ~(C-B);
	b = ~(A-C);
	c = ~(A-B);

	O = {(a*A.x + b*B.x + c*C.x)/(a+b+c),(a*A.y + b*B.y + c*C.y)/(a+b+c)};
	S = fabs((C-B)^(A-C))/2;

	printf("%.9f %.9f %.9f\n",O.x,O.y,2*S/(a+b+c));

}
