#include<bits/stdc++.h>
using namespace std;
calculate(int *a,int n)
{
//	map<int,int> m;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		if(v[a[i]].second==0)
		{
			int x=1;
			v.push_back(make_pair(a[i],x));
		}
		else
		v[a[i]].first=v[a[i]].second+1;
	}
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<it->second;
	}
	
}
	
//	map<int,int>::iterator it;
/*	int i=0;
	for(int i=0;i<n;i++)
	{
		
			
		m[a[i]]++;
		
	}
		for(it=m.begin();it!=m.end();it++)
		{
			cout<<"\n"<<it->first;
		}*/
	

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<calculate(a,n);
}
