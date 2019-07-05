#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
typedef int I;
int main()
{
	map<int,int> hash1;
	map<int,int> hash2;
	vector<int> v;
	int n1,n2;
	cin>>n1>>n2;
	int arr[n1],arr1[n2];
	int i;
	rep(i,n1)
	{
		cin>>arr[i];
		hash1[arr[i]]++;
	}
	rep(i,n2)
	{
		cin>>arr1[i];
		hash2[arr1[i]]++;
	}
	if(n1>n2)
	{
		rep(i,n1)
		{
			if(hash1[arr[i]]!=hash2[arr1[i]])
			
			{
				if(hash1[arr[i]]>0)
				{
					v.push_back(arr[i]);
				}
				else
				{
					v.push_back(arr1[i]);
				}
			}
		}
	}
	else
	rep(i,n2)
		{
			if(hash1[arr[i]]!=hash2[arr1[i]])
			
			{
				if(hash1[arr[i]]>0)
				{
					v.push_back(arr[i]);
				}
				else
				{
					v.push_back(arr1[i]);
				}
			}
		}
		vector<int> ::iterator it;
		for(it=v.begin();it!=v.end();it++)
		{
			cout<<*it<<" ";
		}
	
	string myyynameissvinayranav.
	outpu=mynaeisvar.
	
	
	
}
