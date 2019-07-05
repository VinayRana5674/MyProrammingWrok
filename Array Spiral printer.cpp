#include<bits/stdc++.h>
//#define rep(j,n) for(j=0;j<n;j++)
//#define rep(i,m) for(i=0;i<m;i++)
typedef int l;
using namespace std;
/*
int spiral(int **arr,int m,int n)
{
	
}*/
int main()
{
	l i,j;
	l m,n;
	cin>>m>>n;
	l arr[m][n];
	for(i=0;i<m;i++){
	
	{for(j=0;j<n;j++)
		
		{
			cin>>arr[i][j];
		}
	}
	}
	for(i=0;i<m;i++){
	
	{for(j=0;j<n;j++)
		
		{
			cout<<arr[i][j]<<" ";
		}
	}
	}
//	spiral(&arr,m,n);

	int top=0,bottom=m-1,l=0,r=n-1;
	
	while(top<bottom && l<r)
	
	{
	  
	  {
	  	for(i=l;i<=r;i++)
	  	{
	  		cout<<arr[top][i]<<"   ";
	  		
		}
		  top++;
		 
	  }
	  
	  	for(i=top;i<=bottom;i++)
	  	{
	  		cout<<arr[i][r]<<"   ";
		}
		r--;
		
	  
		 if(top<=bottom)
	  {
	  	
	  	for(i=r;i>=l;--i)
	  	
	  	{
	  		cout<<arr[bottom][i]<<"   ";
		}
		  bottom--;
		 
	  }
	  {
	  	for(i=bottom;i>=top;--i)
	  	{
	  		cout<<arr[i][l]<<"   ";
	  		
		  }
		  l++;
		
	  }
	 
	}	
}
