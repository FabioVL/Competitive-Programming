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
	TVector t1,t2;
	double a,b,c,d;

	cin >> a >> b >> c >> d;
	t1 = {c-a,d-b};
	cin >> a >> b >> c >> d;
	t2 = {c-a,d-b};
	
	printf("%.9f %.9f\n",~t1,~t2);
	printf("%.9f %.9f\n", (t1+t2).x,(t1+t2).y);
	printf("%.9f %.9f\n", t1*t2, t1^t2);
	printf("%.9f\n", fabs(t1^t2)/2);
}