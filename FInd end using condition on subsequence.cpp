#include<bits/stdc++.h>
using namespace std;
bool return_first_greater_element(int a,int b)
{
if(a>b)
{
	return true;
}
}
int main()
{
	int a[10]={4,5,5,6,7,0, 0,0,0,0};
	int a1[4]={4,5,5,6};
	
	auto it=find_end(a,a+10,a1,a1+4,return_first_greater_element);
	if(it!=a+10)
	{
		cout<<"\nFirst greater elment than subsequence is";
		cout<<it-a+1<<"\n";
	}
	else
	{
		cout<<"\nNo";
		
	}	
}
