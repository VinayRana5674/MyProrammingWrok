#include<bits/stdc++.h>
using namespace std;
int main()
{
	//lesss efficient no need to go till n
	
	int n;
	cin>>n;
	for(int i=2;i<=(n);i++)
	{
		if(n%i==0)
		{
		
		 while(n%i==0)
		 {
		 	cout<<i;
		 	n=n/i;
		 	
		 }
	}
	}//
	
/*	// high efficient// once i>sqrt(n) we know there won't be any factor rather   than uodated n 
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		
		 while(n%i==0)
		 {
		 	cout<<i;
		 	n=n/i;
		 	
		 }
	}
	}
	if(n!=1)
	{
		cout<<n;
	}*/
}
