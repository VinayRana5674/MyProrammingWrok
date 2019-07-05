#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int a[10]={1,2,1,3,4,5,7,7,8,9};
	int visited[10]={0};
	for(int i=0;i<10;i++)
	{
		int coun=count(a,a+10,a[i]);
		if(visited[a[i]]==0)
		{
		
		cout<<"a[i] "<<a[i]<<" "<<coun<<"\n";
		visited[a[i]]=1; 
		}	
	}
	
		
}
