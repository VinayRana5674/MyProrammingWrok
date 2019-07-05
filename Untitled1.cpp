#include<bits/stdc++.h>
using namespace std;
findanswer(int *arr,int n)
{

	int sum=n*(n+1)/2;

	int arrsum=0;
	for(int i=0;i<n;i++)
	{
		arrsum+=arr[i];
	}
	
	cout<<sum-arrsum;
}

int main()
{
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	findanswer(a,n);
	
}
