#include<bits/stdc++.h>
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
int binarysearch(int *arr,int n,int x)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==arr[mid])
			return mid;
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	
	
}
int binarylowerbound(int *arr,int n,int x)
{
	int low=0;
	int high=n-1,result=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==arr[mid])
		{
			result=mid;
			high=mid-1;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
			
	}
	return result;
}
int binaryupperbound(int *arr,int n,int x)
{
	int low=0;
	int high=n-1,result=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==arr[mid])
		{
			result=mid;
			low=mid+1;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
			
	}
	return result;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	rep(i,n)
	{
	cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<binarysearch(arr,n,x);
	cout<<"\nLower bound\n";
	cout<<binarylowerbound(arr,n,x);
	cout<<"\nUpper bound\n";
	cout<<binaryupperbound(arr,n,x);

}
