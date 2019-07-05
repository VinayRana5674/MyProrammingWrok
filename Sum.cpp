#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
    int max=0;
     for(int i=0;i<n;i++)
     {
     	cin>>arr[i];
	 }
    for(int i=0;i<n;i++)
    {
        int sum=0; 
if(i<n)
       
{
	int j=i+1;
        
while(j<n)
{
sum=sum+arr[j];
    j++;
}
    sum=sum+arr[i];
    cout<<"\nSum is "<<sum<<"\n";
}if(max<sum)
{
max=sum;
}
        
        
        }
    
    cout<<max;
}
