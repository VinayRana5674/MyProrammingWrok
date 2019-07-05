#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={2,-2,-7,6,-8,8,16,16,10,10};
	int i,j;
	int index=0;
	int a2[10];
	for(i=0;i<10;i++)
	{
		int flag=0;
		for(j=0;j<10;j++)
		{
			if((j<i) && ((-a[i]==a[j]) || a[i]==-a[j]))
			{
				flag=1;
				//cout<<"\n"<<(a[j]);
				a2[index]=a[j];
				index++;
			}
			else
			{
				
			}
		}
		if(flag==1)
		{
			//cout<<"\n"<<(a[i]);
			a2[index]=a[i];
			index++;
		
			
			
		}
	}
		for(i=0;i<index;i++)
		{
			//	cout<<"\n"<<(a2[i]);
		}
	
		
		for(i=0;i<10;i++)
		{
			int var=0;
				for(j=0;j<index;j++)
				{
				if(a[i]==a2[j])
				{
					continue;
				}
				else
				{
					var=1;
				}
	}
if(var==1)
cout<<"\n"<<a[i];
}

}
