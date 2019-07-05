#include<iostream>
using namespace std;
int main()
{
	int n,j,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	
	for(i=0;i<n;i++)
	{
		j=i+1;
		int sum=1;
	
		if(i<n)
		{
		
		while(j<n)
		{
			sum=sum*a[j];
			j++;
		}}
		int y=sum*a[i];
		if(y>max)
		{
			max=y;
		}
	}
	cout<<max;
}
