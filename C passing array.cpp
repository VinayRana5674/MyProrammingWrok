#include<iostream>
using namespace std;
void display(int *n,int s)
{
	int i,sum=0;

	for(i=0;i<s;i++)
	{
		sum=sum+n[i];
	}
	cout<<"Sum is:-"<<sum;
}
int main()
{
	int i,s;
	cin>>s;
	int x[s];
	for(i=0;i<s;i++)
	{
		cin>>x[i];
	}
	display(x,s);
}
