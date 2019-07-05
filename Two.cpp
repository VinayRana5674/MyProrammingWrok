#include<iostream>
using namespace std;
int distinctelement(int arr1[],int arr2[],int l1,int l2)
{
	int var=0,count=0,i,j,result;
	for(i=0;i<l1;i++)
	{
		var=0;
		for(j=0;j<l2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				var=1;
				count++;
			}
		}
		if(var==1)
		{
			count++;
		}
	}
	result=(l1+l2)-result;
	cout<<"Answer is:"<<result;
	return(0);
}
int main()
{
	int i,j,len1,len2;
	
	cin>>len1>>len2;
		int a[len1],a1[len2];
	for(i=0;i<len1;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<len2;i++)
	{
		cin>>a1[i];
		
	}
	distinctelement(a,a1,len1,len2);
}
