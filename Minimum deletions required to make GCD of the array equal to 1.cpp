#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	else
	return gcd(b%a,a);
}
int gcdarray(int *arr,int n)
{
	int result=arr[0];
	for(int i=1;i<n;i++)
	{
		result=gcd(result,arr[i]);
	}
	return result;
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	//c++ stl int z=  __gcd(int a, int b);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}	
	int z=gcdarray(a,n);
	if(z>1)
	cout<<"-1";
	else
	cout<<"0";
}
