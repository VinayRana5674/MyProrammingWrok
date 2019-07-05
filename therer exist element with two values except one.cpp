#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[7]={12,12,1,1,4,4,5};
	map<int,int> hash;
	for(int i=0;i<7;i++)
	{
		hash[arr[i]]=hash[arr[i]]+1;
	}
	for(int i=0;i<7;i++)
	{
	
	//	cout<<hash[arr[i]]<<"\n";
	}
	map<int,int>::iterator it;
	for(it=hash.begin();it!=hash.end();it++)
	{
		if(it->second !=2)
		{
			cout<<it->first;
		}
	}
	
	
	
}
