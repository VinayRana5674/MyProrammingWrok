#include<bits/stdc++.h>
using namespace std;
int mindeletion(int *arr, int n)
{
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
		
	}
	int deletion=0;
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it->first==it->second)
		{
			continue;
		}
		else if(it->first>it->second)
		{
			deletion+=it->second;
		}
		else if(it->second>it->first)
		{
		deletion+=it->second-it->first;
		}
	}
	return deletion;
}
int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
		
	}
	int x=	mindeletion(a,size);
	if(x==0)
	{
		cout<<"No deletion req";
	}
	else
	
	cout<<x;
}
