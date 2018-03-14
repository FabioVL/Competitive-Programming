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

struct TReta {

	double a,b,c;
};

TVector FindP(TVector t1, TVector t2, TVector t3, TVector t4, double x)
{
	if(t1.x == x) return t1;
	if(t2.x == x) return t2;
	if(t3.x == x) return t3;
	if(t4.x == x) return t4;
}



int main()
{
	TReta t1,t2;
	TVector p1,p2,p3,p4,n1,n2,k,aux;
	double x0,y0,x1,y1;
	
	cin >> x0 >> y0 >> x1 >> y1;
	p1 = {x0,y0};
	p2 = {x1,y1};
	if(x0==max(x0,x1)) aux = p2, p2 = p1, p1 = aux;

	t1 = {y1-y0,x0-x1,y0*x1-y1*x0};
	n1 = {t1.a,t1.b};

	cin >> x0 >> y0 >> x1 >> y1;
	p3 = {x0,y0};
	p4 = {x1,y1};
	if(x0==max(x0,x1)) aux = p2, p2 = p1, p1 = aux;

	t2 = {y1-y0,x0-x1,y0*x1-y1*x0};
	n2 = {t2.a,t2.b};

	double minx = min(x0,x1);
	double maxx = max(x0,x1);



	if((n1^n2)!=0)
	{
		double x,y;
		x = (-t1.c*t2.b + t1.b*t2.c)/(n1^n2);
		y = (-t1.a*t2.c + t1.c*t2.a)/(n1^n2);
		if(x>=p1.x and x<=p2.x and x>=p3.x and x<=p4.x)
		{
			printf("%.9f %.9f\n",x,y);
			return 0;
		}
		printf("Empty\n");
		return 0;
	}

	if(t1.b != 0) // Retas não verticais
	{
		if((t1.c)/(t1.b) != (t2.c)/(t2.b)) //Retas paralelas
		{
			printf("Empty\n");
			return 0;
		}

		if(p2.x<p3.x or p4.x<p1.x) //Retas coincidentes sem ponto em comum
		{
			printf("Empty\n");
			return 0;
		}

		if(p2.x==p3.x or p4.x==p1.x) // Retas coincidentes com 1 ponto em comum
		{		 
			if(p2.x==p3.x) printf("%.9f  %.9f",p2.x,p2.y);
			else printf("%.9f  %.9f",p4.x,p4.y);
			return 0;
		}
		if(p2.x>p3.x or p4.x>p1.x) //Retas coincidentes com infinitos pontos em comum
		{
			TVector auxmin = FindP(p1,p2,p3,p4,max(p3.x,p1.x));
			TVector auxmax = FindP(p1,p2,p3,p4,min(p2.x,p4.x));
			printf("%.9f %.9f\n%.9f %.9f\n",auxmin.x,auxmin.y,auxmax.x,auxmax.y);			
			return 0;
		}
	} 
}