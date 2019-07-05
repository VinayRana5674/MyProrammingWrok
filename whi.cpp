#include<iostream>
using namespace std;
int main()
{
	int j=0;
	bool arr[6];
for(int i=0;i<5;i++)
{
	while(j<5)
	{
		cout<<"\n"<<j;
		j++;
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<" i is:"<<i;
		i=i-2;
	}
}
}
