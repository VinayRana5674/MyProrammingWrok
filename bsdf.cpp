#include<bits/stdc++.h>
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int v[n],p[n];
        rep(i,n)
        {
            cin>>v[i];
        }
        rep(i,n)
        {
            cin>>p[i];
        }
        int count=0;
        rep(i,n)
        {
            if(p[i]>v[i])
            {
                count++;
            }
        }
        if(count==n)
        {
            cout<<"WIN"<<endl;
        }
        else
        {
            cout<<"LOSE"<endl;
        }
    }
}
