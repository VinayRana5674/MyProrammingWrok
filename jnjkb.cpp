#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int a[n1],b[n2];
	int n=n1+n2;
	int c[n];
	for(auto i=0;i<n1;i++)
	{
		cin>>a[i];
		
	}
	for(auto i=0;i<n2;i++)
	{
		cin>>b[i];
		
	}
	int j=0,x,size=0;
	map<int,int> m;
	for(auto i=0;i<n;i++)
	{
		
		if(i<n1)
		{ 
		x=a[i];
		if(m[c[i]]==0)
		{
				c[i]=a[i];
			size++;
		}
	
		}
		
		else
		
		{
			x=b[j];
			if(m[c[i]]==0)
			{
			
			c[i]=b[j];
			size++;
			}
			j++;
			
		}
		
	}
		
		sort(c,c+size);
	
		for(auto i=0;i<size;i++)
		{
			cout<<"\n\n"<<c[i];
		}
		
}
