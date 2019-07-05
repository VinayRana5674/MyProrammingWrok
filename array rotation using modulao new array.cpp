#include<iostream>
int main()
{
	int n,d;
	std::cin>>n>>d;
	int a[n];
	int newa[n]={0};
	for(auto i=0;i<n;i++)
	{
		std::cin>>a[i];
		
	}
	for(auto i=0;i<n;i++)
	{
	
		newa[n-1-i]=a[(i+d)%n];
	//	std::cout<<"\nvalue of (i+d)%n is-"<<(i+d)%n;
	//	std::cout<<"\n\n thus value of this is "<<a[(i+d)%n];
	}
	for(auto i=0;i<n;i++)
	{
		std::cout<<"\n\n\n"<<newa[i];
	}
}
