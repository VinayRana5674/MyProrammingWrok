#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int x=10;
	ptr=&x;
	cout<<"\n"<<ptr;
	//cout<<"\n"<<ptr+1;
	cout<<"\n"<<*ptr+1;
	cout<<"\n"<<x;
	cout<<"\n"<<&x+1;
	*ptr=20;
	int *ptr2=ptr;
	cout<<"\n"<<"ptr2"<<" is-"<<*ptr2;
	cout<<"Address of *ptr "<<&ptr2;
	cout<<"\n"<<x+1;
	cout<<"\n"<<*ptr;
}
