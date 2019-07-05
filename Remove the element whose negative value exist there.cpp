#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[7]={12,-12,1,1,4,-4,5};
	map<int,int> hash;
	for(int i=0;i<7;i++)
	{	if(arr[i]>0)
	{
	
		hash[arr[i]]=hash[arr[i]]+1;
		cout<<"for:"<<arr[i]<<"\n";
		cout<<hash[arr[i]]<<"\n";
	}
	else if(arr[i]<0)
	{
	
		int x=abs(arr[i]);
		cout<<"\n\n"<<"value of abs x is:-"<<x;
			cout<<"\nPrevious value of hash[12] is:"<<hash[x];
			int z=hash[x];
		hash[x]= z-1;
			cout<<"\nNext value of hash[12] is:"<<hash[x];
		cout<<"for:"<<arr[i]<<"\n";
		cout<<hash[arr[i]]<<"\n";;
	}
	}	map<int,int>::iterator it;
	for(it=hash.begin();it!=hash.end();it++)
	{ 
	if(it->second!=0)
	{
	
			cout<<"\n\n\n\n"<<"Elements are"<<"\t\t\t"<<it->first;
}
	}
/*	for(int i=0;i<7;i++)
	{
	if(hash[arr[i]]!=0)
		cout<<hash.first<<"\n";
	}*/

	
}
