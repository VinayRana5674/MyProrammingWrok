#include<bits/stdc++.h>
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
int binarybound(int *arr,int n,int x,bool searchfirst)
{
	int low=0;
	int high=n-1,result=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x==arr[mid])
		{
			result=mid;
			if(searchfirst)
				high=mid-1;
			else 
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
	int fi=binarybound(arr,n,x,true);
	if(fi==-1)
	
	{
		cout<<"\ncount is 0";
		
	}
	else
	{
		int li=binarybound(arr,n,x,false);
		cout<<"\nCoubnt is "<<li-fi+1;
	}
	

}
