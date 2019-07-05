#include<bits/stdc++.h>
using namespace std;
bool isodd(int i)
{
	if(i%2!=0)
	{
		return true;
	}
}
int main()
{
	int a[6]={2,3,4,4,5,5};
	auto it=find_if(a,a+6,isodd);
	if(it!=a+6)
	{
		cout<<"\nFirst odd value is "<<*it<<" at position "<<it-a+1;
	}
	else
	{
		cout<<"\n NO";
	}
	auto it1=find_if_not(a,a+6,isodd);
		if(it1!=a+6)
	{
		cout<<"\nFirst even value is "<<*it1<<" at position "<<it1-a+1;
	}
	
}
