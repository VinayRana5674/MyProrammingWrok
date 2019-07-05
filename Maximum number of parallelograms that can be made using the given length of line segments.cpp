#include<bits/stdc++.h>
using namespace std;
int covertparalleograms(int *a,int n)
{
	map<int ,int> m;
	map<int,int>::iterator it;
	for(int i=0;i<n;i++)
	{
		m[a[i]]=m[a[i]]+1;
	}
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second%4==0)
		continue;
		else if(it->second%2!=0)
		{
			m[it->first]= it->second-1;
		}
		
	}
	int sum=0;
	for(it=m.begin();it!=m.end();it++)
	{
		sum=sum+it->second;
	}
	return sum/4;
	
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
	cout<<covertparalleograms(a,n);
}
