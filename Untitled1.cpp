#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i;
	string str[5];
	str[1]="4342343423";
	string ptr[5];
	ptr[1]="345623";
	string temp=str[1];
	string ptr_temp=ptr[1];
	cout<<"\n"<<temp;
	cout<<"\n"<<ptr_temp;
	if(temp.find(ptr_temp))
	{
		cout<<"True";
	}
	else
	{
		cout<<"False";
	}
	
}
