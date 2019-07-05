#include<iostream>
using namespace std;
//int distinctelement(int *arr1,int *arr2,int l1,int l2 )
int distinctelement(int arr1[],int arr2[],int l1,int l2)
{
	int var=0,count=0,i,j=0,result;
	for(i=0;i<l1;i++)
	{
	while(j<l2)
	{
		if(arr1[i]!=arr2[j])
		{
			cout<<arr1[i]<<" Is not equal to "<<arr2[j];
			j++;
		}
		else
		{
			cout<<arr1[i]<<" Is  equal to "<<arr2[j];
			
			count++;
			cout<<"New count value "<<count;
			continue;
		}
	}
	}
	result=(l1+l2)-count;
	cout<<"Answer is:"<<count;
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
