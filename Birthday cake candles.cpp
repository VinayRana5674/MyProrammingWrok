#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        int countmax=0;
        int x = sizeof(arr)/sizeof(arr[0]); 
        cout<<"\n\n size is"<<x;
        sort(arr,arr+x);
        for(i=0;i<n;i++)
        {
        	cout<<"  "<<arr[i];
		}
       for(i=n-1;i>=0;i--)
       {
               if(arr[n-1]==arr[i])
               {
                       countmax++;
               }
       }
       cout<<countmax;

}

