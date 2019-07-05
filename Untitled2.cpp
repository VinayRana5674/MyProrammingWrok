#include<bits/stdc++.h>
using namespace std;
int main()
{
int a2[10]={2,-2,-7,6,-8,8,16,16,10,10};
int a[4]={2,-2,-8,8};
int i,j;
		
	int x;
	
		for(i=0;i<4;i++)
		{
			int var=0;
				for(j=0;j<10;j++)
				{
				if(a[i]==a2[j])
				{
					
					var=1;
					 x=a[i];
				}
				
	}
if(var==1)
cout<<"\n"<<x;
}
}
