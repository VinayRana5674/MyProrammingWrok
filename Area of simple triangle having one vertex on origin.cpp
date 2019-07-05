#include<bits/stdc++.h>
using namespace std;
struct Point
{
	double x;
	double y;
};

double cross_product(Point a,Point b)
{
	return a.x*b.y -a.y*b.x;
}
double area(Point a,Point b)
{
	return cross_product(a,b)/2.0;
}
int main()
{
Point a;
a.x=3.0;
a.y=1.0;
Point b;
b.x=2.0;
b.y=3.0;
cross_product(a, b);
cout<<area(a,b);
	
	
}
