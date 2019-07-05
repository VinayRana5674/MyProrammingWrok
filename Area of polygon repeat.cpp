#include<bits/stdc++.h>
using namespace std;
struct Point
{
	double x;
	double y;
};
double cross_product(Point a,Point b)
{
	return a.x*b.y-b.x*a.y;
	
}
double area_of_polygen(Point *vertices,int n)
{
	double sum_of_area=0;
	for(int i=0;i<n;i++)
	{
		sum_of_area+=cross_product(vertices[i],vertices[(i+1)%n]);
	}
return abs(sum_of_area)/2.0;
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
	
	cout<<area_of_polygen(vertices,n);

}
