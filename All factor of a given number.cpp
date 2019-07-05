#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"1"<<"\t";
	for(int i=2;i<=n/2;i++)// efiicient than n because no factor of n can be greater than n/2 other than n itself
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	cout<<n;
	
	//more efficient
	for(int i=1;i<=sqrt(n);i++)// efiicient than n because no factor of n can be greater than n/2 other than n itself
	{
		if(n%i==0)
		{
			cout<<i<<"\t"<<n/i;
		}
	}
}
