#include<iostream>
using namespace std;
int getint(int n1,int n2)
{
	if(n1==0)
		return(n2);
	if(n2==0)
		return(n1);
	if(n1>n2)
		return getint(n1-n2,n2);
	else
	
	return getint(n1,n2-n1);
/*	if(n1==0)
	return(n2);
	
	return getint(n2%n1,n1);*/
	
}
int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	getint(n1,n2);
	cout<<getint(n1,n2);

}
