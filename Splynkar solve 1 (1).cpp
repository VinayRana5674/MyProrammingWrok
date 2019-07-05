#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int a[n1],b[n2];
	int count=0;
	map<int,int> m;
	for(auto i=0;i<n1;i++) 
	{
		cin>>a[i];
		{
			if(m[a[i]]==0)
			{
				m[a[i]]++;
				count++;
			}
		}
		
		
	}
	for(auto i=0;i<n2;i++)
	{
		cin>>b[i];
		if(m[b[i]]==0)
			{
				m[b[i]]++;
				count++;
			}
		
	}
	int newarray[count];
	int k=0;
	for(auto i=m.begin();i!=m.end();i++)
	{
		newarray[k]=i->first;
		k++;
	}
for(auto i=0;i<count;i++)
{
	cout<<"\n\n\n\n "<<newarray[i];
}
	
}
