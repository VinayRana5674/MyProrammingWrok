#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6]={1,3,4,4,5,5};
	auto it=find(a,a+6,4);
	auto it1=find(a,a+6,5);
	if(it!=a+6)
	{
		cout<<it-a+1;
	}
	if(it1!=a+6)
	{
		cout<<it-a+1;
	}
}
