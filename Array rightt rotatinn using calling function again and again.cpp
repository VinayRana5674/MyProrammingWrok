#include<iostream>
int t;
std::cin>>t;
int rotate(int *arr,int n)
{
	int last=arr[n-1];
	for(auto i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
 	}
 	arr[0]=last;
}
void printarray(int *arr,int n)
{
	for(auto i=0;i<n;i++)
	{
		std::cout<<"\n"<<arr[i];
	}
}
int main()
{
	int n,d;
	std::cin>>n>>d;
	int arr[n];
	for(auto i=0;i<n;i++)
	{
		std::cin>>arr[i];
	}
	d=d%n;
	for(auto i=0;i<d;i++)
	{
		rotate(arr,n);
	}
	printarray(arr,n);
}
