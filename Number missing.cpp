#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> vinay1;
	map<int,int> vinay2;
	int arr[5]={1,2,3,5,6};
	for(int i=0;i<5;i++)
	{
		int x=arr[i];
		vinay1[x]++;
	}
	for(int i=1;i<=5;i++)
	{
		if(vinay1[i]==0)
		{
			cout<<i;
		}
	}
}
