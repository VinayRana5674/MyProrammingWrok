#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
		
	}
	return sum;
	
	
}
void sortArr(int arr[],int n)
{
	
	vector<pair<int,int>> vp;
	for(int i=0;i<n;i++)
	{
		vp.push_back(make_pair(sumofdigit(arr[i]),arr[i]));
	
	}
	sort(vp.begin(),vp.end());
	for(int i=0;i<n;i++)
	
	{
		cout<<vp[i].second<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sortArr(arr,n);
}
