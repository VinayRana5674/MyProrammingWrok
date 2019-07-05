#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int a[10]={1,2,12,3,4,5,6,7,8,9};
	int range=6;
	auto it=adjacent_find(a,a+range,greater<int>());
	if(it==(a+range))// if it iterator reches till given range of elemements address print the range +1
	{
	cout<<*a+range;
	}
	else
	{
		cout<<"\n"<<*it;// else print till when list is sorted
	}
//	cout<<"\n"<<*it;
		
}
