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
double area(Point* vertices,int n)
{
	double sum_area=0.0;
	for(int i=0;i<n;i++)
	{
		
		sum_area+=cross_product(vertices[i],vertices[(i+1)%n]);
		
		
	}
	return abs(sum_area/2.0);
}
int main()
{

int n;
cin>>n;

Point vertices[n];

for(int i=0;i<n;i++)
{
	cin>>vertices[i].x;
	cin>>vertices[i].y;
}
area(vertices,n);
cout<<area(vertices,n);
	
	
}
