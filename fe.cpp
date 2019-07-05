#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int nums[n];

        for(i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        int initial=nums[0];
        int lastvalue=0;
        int initialupdate;
        int i;
        for(i=1;i<n;i++)
        {
            initialupdate=(initial>lastvalue)? initial:lastvalue;
            initial=lastvalue+nums[i];
            lastvalue=initialupdate;
        }
    }

}    
       
