#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int a[n1],b[n2];
	int count=0;
	map<int,int> m;
	for(auto i=0;i<n1;i++) 
	{cin>>a[i];
		{
		
				m[a[i]]++;
				count++;
		}
	}
	for(auto i=0;i<n2;i++)
	{	cin>>b[i];
	
				m[b[i]]++;
				count++;
			
		
	}
	int newarray[count];
	int k=0;
	for(auto i=m.begin();i!=m.end();i++)
	{
	while(i->second!=0)
	{
		newarray[k]=i->first;
		i->second--;
		k++;
	}
	}                      
		int median;
if(count%2==0)// for even number of element;
{

median=(newarray[count/2]+newarray[count/2 +1])/2;
	
}
else
{
	median=newarray[count/2 ] ;
}


cout<<median;
}
