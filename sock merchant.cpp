#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> hash;
    map<int,int>::iterator it;
    int t;
    cin>>t;
    int arr[t];
    int i;
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
        hash[arr[i]]=hash[arr[i]]+1;
    }
  
    int count=0;
    for(it=hash.begin();it!=hash.end();it++)
    {
        
       count=count+(it->second/2);
    }
    cout<<count;
}

