#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m;
    cin>>m;
    
    int arr[m+1]={0};
    
    
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int j;
        for(j=l;j<=r && j<= m;j++)
        {
            arr[j]=arr[j]+k;
        }
        
    }
    for(i=1;i<m+1;i++)
    {
        cout<<"\n"<<arr[i];
    }
    int x=0;
    for(i=1;i<m+1;i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }
    cout<<x;
}
