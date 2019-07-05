#include<iostream>
#include<string>
using namespace std;
int main()
{

	
	int l,w,h;

	int a=10;
	
	cout<<"enter"<<a++;
	cout<<"Size of "<<sizeof(int);
	

		cin>>w>>h;
		if(w>=l && h>=l)
		{
			if(w==h)
			{
				cout<<"ACCEPTED";
				
			}
			else
			{
				cout<<"CROP";
			}
			
			
		}
		else
		{
			cout<<"CHANGE";
		}
	
}
