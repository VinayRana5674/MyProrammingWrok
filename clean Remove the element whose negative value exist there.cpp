#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[8]={12,-12,12,1,-8,4,-4,5};
	map<int,int> hash;
	for(int i=0;i<7;i++)
	{	if(arr[i]>0)
	{
	
		hash[arr[i]]=hash[arr[i]]+1;
		
	}
	else if(arr[i]<0)
	{
	
		int x=abs(arr[i]);
		int z=hash[x];
		hash[x]= z-1;
	}
	}
		map<int,int>::iterator it;
	for(it=hash.begin();it!=hash.end();it++)
	{ 
	if(it->second!=0)
	{
	
			cout<<it->first<<"\n";
}
	}


	
}
